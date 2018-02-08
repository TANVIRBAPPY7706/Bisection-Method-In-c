 //The equation of B-S Method f(x)= x^3-2x^2+3
 #include<stdio.h>

double function(double x)
{
    return x*x*x - 2*x*x + 3;
}

double m=0.01;  //take a dec value to compare a root value.
double c;         ////root= calculate root value.

void bisection(double a,double b)
{
    if(function(a) * function(b) >= 0)     // condition of being lie between two value
    {
        printf("Incorrect value of a and b");
        return;
    }

    c = a;

    while ((b-a) >= m)
    {
        c = (a+b)/2;       // like Xr =a+b/2 to put the result in main func
        if (function(c) == 0.0){
            printf("Root value = %lf\n",c);
            break;          // untill check the root value
        }
        else if (function(c)*function(a) < 0){
                printf("Root value = %lf\n",c);
                b = c;
        }
        else{
                printf("Root value = %lf\n",c);
                a = c;
        }
    }
}

int main()
{
    double a,b;
    a=-42;      //              here, f(-3)=42
    b=3;         //              here,f(2)=8

    printf(" Given that f(x) = x^3-2x^2+3\n");
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    bisection(a,b);
    printf("\n");
    printf("The final root value is = %lf \n",c);

    return 0;
}
