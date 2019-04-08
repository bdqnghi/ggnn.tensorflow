int main()
{
	int second(int a[],int n);
	int k=0,a[300],num=0;
	char c;
	do
	{
		scanf("%d%c",&a[k++],&c);
		num++;
	}
	while(c!='\n');
	if(second(a,num)!=-1)printf("%d",second(a,num));
	else printf("No");
	return 0;
}
int second(int a[],int n)
{
	int max=a[0],k=1,next=-1;
	while(k<n)
	{
		if(a[k]>max)
		{
			next=max;
			max=a[k];
		}
		if(a[k]<max&&a[k]>next) next=a[k];
		k++;
	}
	if(next!=-1) return next;
	else return(-1);
}