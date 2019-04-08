int main()
{
    int n,h=1;
    double a,b,c,e;
    double x1,x2,y;
    scanf("%d",&n);
    for(h=1;h<=n;h++)
    {
    scanf("%lf %lf %lf",&a,&b,&c);
    y=b*b-4*a*c;
    if(y>0)
    {
    x1=(-b+sqrt(y))/(2*a);
    x2=(-b-sqrt(y))/(2*a);
    if(c==0)
    printf("x1=0.00000;x2=%.5f\n",x2);
    else
    printf("x1=%.5f;x2=%.5f\n",x1,x2);
}
    else
    if(y==0)
    {
    x1=x2=(-b)/(2*a);
    printf("x1=x2=%.5f\n",x1);
}
    else
    {
    e=(sqrt(-y))/(2*a);
    if(b==0)
    printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",0.00000,e,0.00000,e);
    else
    printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-b)/(2*a),e,(-b)/(2*a),e);
}
}
    getchar();
    getchar();
    getchar();
}   