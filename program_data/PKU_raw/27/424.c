int main()
{
    double a,b,c,x1,x2,z;
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if (b*b-4*a*c>0) 
        {            
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);  
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }
        else if (b*b-4*a*c<0)
        {
            if (b==0) x1=0;
            else x1 = (-b )/(2*a);
            z = sqrt(-b*b+4*a*c)/(2*a); 
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,z,x1,z);
        }
        else if (b*b-4*a*c==0) 
        {
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a); 
            printf("x1=x2=%.5lf\n",x1);
        }
    }
    return 0;
}
