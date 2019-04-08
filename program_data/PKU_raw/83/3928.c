int main()
{
    int k,j,i,n;
    cin>>n;
    float a[n];
    float b[n];
    float s[n];
    float sum=0,x;
    for(i=0;i<n;i++)
    {cin>>a[i];}
    for(j=0;j<n;j++)
    {cin>>b[j];}
    for(x=0,k=0;k<n;k++)
    {
          if (b[k]>=90) s[k]=4;
          else if (b[k]<=89&&b[k]>84) s[k]=3.7;
          else if (b[k]<=84&&b[k]>81) s[k]=3.3;
          else if (b[k]<=81&&b[k]>77) s[k]=3.0;
          else if (b[k]<=77&&b[k]>74) s[k]=2.7;
          else if (b[k]<=74&&b[k]>71) s[k]=2.3;
          else if (b[k]<=71&&b[k]>67) s[k]=2;
          else if (b[k]<=67&&b[k]>63) s[k]=1.5;
          else if (b[k]<=63&&b[k]>59) s[k]=1;
          else s[k]=0;
         sum=sum+a[k]*s[k];
         x=x+a[k];
}
    sum=sum/x;
    printf("%.2f",sum);
    return 0;
}
