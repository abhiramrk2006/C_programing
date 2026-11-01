#include<stdio.h>
#include<math.h>

int main() {
    int a=2;
    int b=2;

    float c=3.14;
    float d=3.14;
    float e=3.14;

    int f=-3;

    float g=5;
    float h=5;

    a = sqrt(a);    //square root

    b = pow(b,3);   // power ,raise to
    

    c = round(c);   // round off

    d = ceil(d);    //ceiling function(round up)

    e = floor(e);   //(round down)


    f = abs(f);    //absolute value function (absolute value of -3 is 3)
    

    g = log(g);    //logerithemic function

    h = sin(h);   //trigonometric function

    printf ("a=%d\n",a);
    printf ("b=%d\n",b);
    printf ("c=%f\n",c);
    printf ("d=%f\n",d);
    printf ("e=%f\n",e);
    printf ("f=%d\n",f);
    printf ("g=%f\n",g);
    printf ("h=%f\n",h);
    
    return 0;

}