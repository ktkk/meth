#ifndef prepro // Remove stdio when inspecting preprocessor output
#include <stdio.h>
#endif
#include "meth.h"

typedef struct Rectangle {
	float width;
	float height;
} Rectangle;

METH_DECL(float, Rectangle, area) METH_BODY({
	return this->width * this->height;
})
	
METH_DECL(float, Rectangle, increase_width, float amount) METH_BODY({
	this->width += amount;
})

int main() {
	Rectangle rect = { .width = 10.f, .height = 5.f };

	printf("Area of Rectangle rect: %f\n",
			METH(Rectangle, rect, area));
	
	METH(Rectangle, rect, increase_width, 5.f);
	
	printf("Area of Rectangle rect after increasing width: %f\n",
	       		METH(Rectangle, rect, area));
}
