int main()
{
	int n=0,i,j,a[1000],b[1000],c[1000]={0},max,t=0;
	char d;
	do
	{
		scanf("%d",&a[n]);
		n++;
	}while((d=getchar())!='\n');
	for(i=0;i<n-1;i++)
	scanf("%d,",&b[i]);
	scanf("%d",&b[n-1]);
	for(i=0;i<n;i++)
		if(a[i]>t)t=a[i];
	for(i=0;i<n;i++)
		if(b[i]>t)t=b[i];
	for(i=0;i<t;i++)
		for(j=0;j<n;j++)
		if(i>=a[j]&&i<b[j])c[i]++;
	max=c[0];
	for(i=1;i<t;i++)
		if(max<c[i])max=c[i];
	printf("%d %d",n,max);
	return 0;
}