#define METH_DECL(ret, name, type, params, body) \
	ret type##_##name(type* this, params) body

#define METH_DECL_NOPARAMS(ret, type, name, body) \
	ret type##_##name(type* this) body

#define METH(type, object, meth, params) \
	type##_##meth(&object, params)

#define METH_NOPARAMS(type, object, meth) \
	type##_##meth(&object)

// [ ] TODO: Refine parameters.
//           Preferably there would be no separate macros for methods with and without params.

// [ ] TODO: Improve syntax somehow.
//           Ideally we would call a method like this: `METH(rect.area())`.
