int main()
{
	int max,m=0,a[300],i;
	scanf("%d",&a[0]);
	max=a[0];i=1;
	while(scanf(",%d",&a[i]))
	{
		if(a[i]>max){m=max;max=a[i];}
		else if(a[i]>m&&a[i]<max) m=a[i];
	}
	if(m==0) printf("No\n");
	else printf("%d\n",m);
	return 0;
}
