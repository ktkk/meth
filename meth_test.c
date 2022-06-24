#ifndef prepro
#include <stdio.h>
#endif
#include "meth.h"

typedef struct Rectangle {
	float width;
	float height;
} Rectangle;

METH_DECL_NOPARAMS(float, Rectangle, area, {
	return this->width * this->height;
})

int main() {
	Rectangle rect = { .width = 10.f, .height = 5.f };

	printf("Area of Rectangle rect: %f\n",
			METH_NOPARAMS(Rectangle, rect, area));
}
