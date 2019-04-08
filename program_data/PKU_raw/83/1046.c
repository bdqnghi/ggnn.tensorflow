
float score ( float x )
{
    if(x<60)
      return 0;
    else if(x<=63)
      return 1.0;
    else if(x<=67)
      return 1.5;
    else if(x<=71)
      return 2.0;
    else if(x<=74)
      return 2.3;
    else if(x<=77)
      return 2.7;
    else if(x<=81)
      return 3;
    else if(x<=84)
      return 3.3;
    else if(x<=89)
      return 3.7;
    else
      return 4.0;
}

int main()
{
    int n,i;
    float sum=0,GAP=0,a[10]={0},b[10]={0},c[10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=(float)a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%f",&b[i]);
        c[i]=score( b[i] );
        GAP+=a[i]*c[i];
    }
    GAP/=sum;
    printf("%.2f\n",GAP);
    return 0;
}
