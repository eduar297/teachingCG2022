

if __name__ == '__main__':
    code = "from ._mathbase import * \n\r"
    types = ['float', 'int', 'uint', 'bool']
    np_types = ['np.float32', 'np.int32', 'np.uint32', 'np.bool8']
    for t, npt in zip(types, np_types):
        for c in range(1, 5):
            code += f"""
class {t}{c}(tensor_backed):
    @staticmethod
    def get_type_info():
        return {npt},({c},)  # type and shape
    def __init__(self, *args):
        super({t}{c}, self).__init__(args, {npt}, ({c},))
REGISTERED_TYPES[{npt}][({c},)] = {t}{c}

        """
            for r in range(1, 5):
                code += f"""
class {t}{r}x{c}(tensor_backed):
    @staticmethod
    def get_type_info():
        return {npt},({r}, {c})  # type and shape
    def __init__(self, *args):
        super({t}{r}x{c}, self).__init__(args, {npt}, ({r},{c}))
REGISTERED_TYPES[{npt}][({r},{c})] = {t}{r}x{c}
    
                    """
    component_wise_functions_1 = {
        'abs': 'abs',
        'acos': 'arccos',
        'all':  'all',
        'any': 'any',
        'asin': 'arcsin',
        'atan': 'arctan',
        'ceil': 'ceil',
        'cos': 'cos',
        'cosh': 'cosh',
        'degrees': 'degrees',
        'exp': 'exp',
        'exp2': 'exp2',
        'floor': 'floor',
        'isfinite': 'isfinite',
        'isinf': 'isinf',
        'isnan': 'isnan',
        'log': 'log',
        'log10': 'log10',
        'log2': 'log2',
        'radians': 'radians',
        'rcp': 'reciprocal',
        'round': 'around',
        'sign': 'sign',
        'sin': 'sin',
        'sinh': 'sinh',
        'sqrt': 'sqrt',
        'tan': 'tan',
        'tanh': 'tahn',
        'trunc': 'trunc'
    }

    for k, v in component_wise_functions_1.items():
        code += f"""
def {k}(x):
    return tensor_from_np(np.{v}(x.data))
        """

    component_wise_functions_2 = {
        'fmod': 'fmod',
        'ldexp': 'ldexp',
        'pow': 'power'
    }
    for k, v in component_wise_functions_2.items():
        code += f"""
def {k}(x, y):
    return tensor_from_np(np.{v}(x.data, y.data))
            """
    code += f"""
def atan2(y, x):
    return tensor_from_np(np.arctan2(y.data, x.data))
            """
    code += f"""
def dot(x, y):
    assert len(x.data.shape) == 1 and len(y.data.shape) == 1, "Both arguments should be equal size vectors"
    return np.dot(x.data, y.data)
def cross(x, y):
    assert x.data.shape == (3,) and y.data.shape == (3,), "Both arguments should be 3-d vectors"
    return tensor_from_np(np.cross(x.data, y.data))
def mul(x, y):
    return tensor_from_np(x.data @ y.data)
    """

    with open('_math_defs.py', 'w') as f:
        f.write(code)

