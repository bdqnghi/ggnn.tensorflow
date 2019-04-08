int main(void)
{
    int repeat, ri;
    double a, b, c, d;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        d=b*b-4*a*c;
        if (d>0) 
           {
                 printf("x1=%.5f;", (-b+sqrt(d))/(2*a));
                 printf("x2=%.5f\n", (-b-sqrt(d))/(2*a));
           }
        else if (d<0) 
        {
             if (b==0)  
                {
                       printf("x1=0.00000+%0.5fi;", sqrt(-d)/(2*a));
                       printf("x2=0.00000-%0.5fi\n", sqrt(-d)/(2*a));
                 }
             else 
                {
                       printf("x1=%.5f+%0.5fi;", -b/(2*a), sqrt(-d)/(2*a));
                       printf("x2=%.5f-%0.5fi\n", -b/(2*a), sqrt(-d)/(2*a));
                } 
           }  
        else printf("x1=x2=%.5f\n", -b/(2*a)); 
    }  
    return(0);   
} 