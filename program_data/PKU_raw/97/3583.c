
int main()
{
    int z,a=0,b=0,c=0,d=0,e=0,f=0;
    scanf("%d",&z);
    a=z/100;
    if(z-100*a>0)
    {
                 b=(z-100*a)/50;
    }
    if(z-100*a-50*b>0)
    {
                      c=(z-100*a-50*b)/20;
    }
    if(z-100*a-50*b-20*c>0)
    {
                           d=(z-100*a-50*b-20*c)/10;
    }
    if(z-100*a-50*b-20*c-10*d>0)
    {
                              e=(z-100*a-50*b-20*c-10*d)/5;
    }
    if(z-100*a-50*b-20*c-10*d-5*e>0)
    {
                                    f=z-100*a-50*b-20*c-10*d-5*e;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    return 0;
}
                    
