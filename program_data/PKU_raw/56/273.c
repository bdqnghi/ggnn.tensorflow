int main()
{
    int a[4],i; 
    int b[4]={0}; 
    for(i=0;i<=3;i++)
    scanf("%d",&a[i]); 
    for(i=0;i<=3;i++)
	{
	 while(a[i]>9)
	{ 
	 b[i]=(b[i]+a[i]-a[i]/10*10)*10; 
          a[i]/=10; 
         } 
    b[i]+=a[i]; 
    printf("%d\n",b[i]);
	}
    return 0;
}
