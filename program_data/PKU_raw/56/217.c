int main()
{
    int i,a[10],b[10]; 
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
    b[i]=0; 
    while(a[i]>9)
	{ 
      b[i]=(b[i]+a[i]-a[i]/10*10)*10; 
      a[i]=a[i]/10; 
    } 
    b[i]=b[i]+a[i]; 
    printf("%d\n",b[i]);
	}
	return 0;
}
