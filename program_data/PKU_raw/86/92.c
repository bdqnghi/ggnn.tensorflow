int main()
{
	int n,times,a[60],k,i;
	scanf("%d",&n);
	while(n>0)
	{
		n--;
		scanf("%d",&k);
		for(i=0;i<k;i++)
			scanf("%d",&a[i]);
		times=60;i=0;
		while(i<k&&a[i]<times)
		{
			if(times-3<a[i]) times=a[i];
			else times=times-3;
			i++;
		}
		printf("%d\n",times);
	}
}