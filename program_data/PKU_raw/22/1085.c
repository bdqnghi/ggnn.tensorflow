int main ()
{
	int a[300]={-1},n,i,first,second;
	scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		scanf(",%d",&a[i]);
	n=0;
	for(i=0;i<300;i++)
		if(a[i]!=-1) n++;
	first=0;second=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
			first=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<first&&a[i]>=second)
			second=a[i];
	}
	if(second==0) printf("No\n");
	else printf("%d\n",second);
}
