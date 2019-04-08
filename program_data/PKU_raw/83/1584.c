
int main()
{
    int n,i,grade;
    scanf("%d",&n);
    float credit[10],a=0,b=0,GPA;
    for(i=1;i<=n;i++)
    { 
                    scanf("%f",&credit[i]);
                    a+=credit[i];
    }
    for(i=1;i<=n;i++)
    {
    scanf("%d",&grade);
    if(90<=grade&&grade<=100)
    b+=credit[i]*4.0;
    else if(85<=grade&&grade<=89)
    b+=credit[i]*3.7;
    else if(82<=grade&&grade<=84)
    b+=credit[i]*3.3;
    else if(78<=grade&&grade<=81)
    b+=credit[i]*3.0;
    else if(75<=grade&&grade<=77)
    b+=credit[i]*2.7;
    else if(72<=grade&&grade<=74)
    b+=credit[i]*2.3;
    else if(68<=grade&&grade<=71)
    b+=credit[i]*2.0;
    else if(64<=grade&&grade<=67)
    b+=credit[i]*1.5;
    else if(60<=grade&&grade<=63)
    b+=credit[i]*1.0;
    else
    b+=credit[i]*0;
    }
    GPA=b/a;
    printf("%.2f",GPA);
}
    