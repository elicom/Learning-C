#include <stdio.h>

struct Point{
    int x;
    int y;
};

typedef struct Point Point;

int main()
{
    Point p1 = {1,2};
    Point *p2 = &p1;
    printf("p1.x:%d p1.y:%d \n",p1.x,p1.y);
    //printf("p2.x:%d p2.y:%d \n",(*p2).x,(*p2).y);
    printf("p2.x:%d p2.y:%d \n",p2->x,p2->y); // -> only on pointers
    return 0;
}