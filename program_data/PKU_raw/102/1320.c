int main()
{
    int n,sum=0;
    float h[100];
    char gender[10];
    cin>>n;
    for (int i=1;i<=n;i++)
    {cin>>gender>>h[i];
    if (strcmp(gender,"male")==0)
    { h[i]=h[i]*10;
    sum++;}
    
    }
    sort(h+1,h+n+1);
    for (int i=n-sum+1;i<=n;i++)
    printf("%.2lf ",h[i]/10);
    for (int i=n-sum;i>=2;i--)
    printf("%.2lf ",h[i]);
 
    printf("%.2lf",h[1]);
    
   
    return 0;
} 
