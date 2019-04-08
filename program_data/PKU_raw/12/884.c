int main()
{
	float a[16];
	int i,j,n,t;
	for(i=0;i<100;i++)
	{
		n=0;
		t=0;
	scanf("%f",&a[0]);
	if(a[0]==-1) break;
	n=n+1;
	for(j=1;j<16;j++)
	{
		scanf("%f",&a[j]);
		if(a[j]==0) break;
		n=n+1;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if (a[j]==a[i]*2||a[j]==0.5*a[i])
	     	t++;
		}
	printf("%d\n",t);
	}
return 0;
}
