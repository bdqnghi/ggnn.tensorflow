float find(float a,float b,float c,float d,float p)
{
    float s=(a+b+c+d)/2,k,temp,q;
    q=p*asin(1)/180;
    temp=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(q)*cos(q);
    if(temp>=0)
    {
        k=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(q)*cos(q)); 
    }
    else
    {
        k=0;
    }
    return k;
}
int main()
{
    float a,b,c,d,p,k;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&p);
    k=find(a,b,c,d,p);
    if(k==0)
    {
        printf("Invalid input");
    }
    else
    {
        printf("%.4f",k);
    }
    return 0;
}
