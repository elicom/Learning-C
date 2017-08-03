#include <stdio.h>

struct Point{
    int x;
    int y;
};

typedef struct Point Point;

void increment(Point* p){
    p -> x++;
    p -> y++;
}

int main()
{
    Point p1 = {1,2};
    printf("Before p1.x:%d p1.y:%d \n",p1.x,p1.y);
    increment(&p1);
    printf("After p1.x:%d p1.y:%d \n",p1.x,p1.y);
    return 0;
}