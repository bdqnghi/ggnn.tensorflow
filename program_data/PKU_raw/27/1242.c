int main ()
{
    int n,i;
    double a,b,c,x1,x2,a1,a2,b1,b2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if(b*b-4*a*c>0)
        {
            x1=(-b+sqrt(b*b-4*a*c))/(2*a);
            x2=(-b-sqrt(b*b-4*a*c))/(2*a);
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
            }
            else if(b*b-4*a*c==0)
            {
               x1=(-b+sqrt(b*b-4*a*c))/(2*a);
               printf("x1=x2=%.5lf\n",x1);
                }
                else
                {
                    a1=(-b)/(2*a);
                    a2=(-b)/(2*a);
                    b1=sqrt(4*a*c-b*b)/(2*a);
                    b2=sqrt(4*a*c-b*b)/(2*a);
                    printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",a1,b1,a2,b2);
                    }
        }
    return 0;
    }
