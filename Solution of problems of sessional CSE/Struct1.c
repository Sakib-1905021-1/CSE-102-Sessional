#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct Point
{
    double x;
    double y;
};
struct Circle
{
    struct Point p;
    double r;
};
struct Rectangle
{
    struct Point p1;
    struct Point p2;
};
double area_rect(struct Rectangle r)
{
    double area;
    area = (r.p2.x-r.p1.x)*(r.p1.y-r.p2.y);
    return area;
}
int rect_inside_circle(struct Circle c,struct Rectangle r)
{
    double dx,dy,d;
    dx = (c.p.x-r.p1.x)*(c.p.x-r.p1.x)+(c.p.y-r.p1.y)*(c.p.y-r.p1.y);
    dy = (c.p.x-r.p2.x)*(c.p.x-r.p2.x)+(c.p.y-r.p2.y)*(c.p.y-r.p2.y);
    d = (c.r)*(c.r);
    if(dx<=d && dy<=d)
        return 1;
    else
        return 0;
}
int main()
{
    struct Circle c1;
    struct Rectangle r1;
    int k;
    scanf("%lf%lf%lf",&c1.p.x,&c1.p.y,&c1.r);
    scanf("%lf%lf%lf%lf",&r1.p1.x,&r1.p1.y,&r1.p2.x,&r1.p2.y);
    printf("Area of rectangle:%0.2lf\n",area_rect(r1));
    k = rect_inside_circle(c1,r1);
    if(k == 1)
        printf("Inside");
    else if(!k)
        printf("Not inside");
    return 0;
}
