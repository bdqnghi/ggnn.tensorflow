void main()
{
	int n,i,j,t,a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{if(a[i]!=0){t=a[i];
	for(j=i+1;j<=n;j++)if(a[j]==t)	a[j]=0;}
	}
	t=0;
	for(i=0;i<n;i++)
		if(a[i]!=0&&t==0){printf("%d",a[i]);t++;}
		else if(a[i]!=0)printf(",%d",a[i]);
}