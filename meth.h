#define METH_BODY(body) body

#define METH_DECL(ret, type, name, ...) \
	ret type##_##name(type* this, ##__VA_ARGS__)

#define METH(type, object, meth, ...) \
	type##_##meth(&object, ##__VA_ARGS__)

// [x] TODO: Refine parameters.
//           Preferably there would be no separate macros for methods with and without params.

// [ ] TODO: Variadic arguments that work under different compilers.
//           Current implementation uses `##__VA_ARGS__`, which only works under GCC.

// [ ] TODO: Improve syntax somehow.
//           Ideally we would call a method like this: `METH(rect.area())`.
