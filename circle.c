#include <malloc.h>
#include "circle.h"
#include <stdbool.h>


void fiveCircles(circle c[]) {
	for (int i = 0; i < 5; i++){
//Loop over fives circles i=1->5 and set their coordinate and radius accordingly.
	c[i].p.x = i;
	c[i].p.y = i;
	c[i].r = i;
	}
	
}

bool circleIsValid(const circle * c) {
	//The circle is valid if it's radius is above 0.
if(c->r > 0){
	return 1;
}
else{
  return 0;
}
}


void translate(circle* c, const point* p) {
c->p.x += p->x;
c->p.y += p->y;
}

