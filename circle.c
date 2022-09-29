#include <malloc.h>
#include "circle.h"
#include <stdbool.h>


void fiveCircles(circle c[]) {
	for (int i = 0; i < 5; i++){
	c[i].p.x = i;
	c[i].p.y = i;
	c[i].r = i;
	}
	
}

bool circleIsValid(const circle * c) {
if(c->r > 0)
{
	return true;
}
	else
{
	return false;
}
}

void translate(circle* c, const point* p) {
c->p.x += p->x;
c->p.y += p->y;
}
