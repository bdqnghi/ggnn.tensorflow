int main()
{
	int w,i;
	int count=0;
	int m[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int d[13]={0};
	int a[12],b[12];
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		d[i]=d[i]+m[i];
		d[i+1]=d[i];
		b[i]=(13+d[i]+w)%7-1;
		if(b[i]==5)
		{
			count++;
			a[count]=i+1;
		}
	}
	for(i=1;i<=count;i++)
		printf("%d\n",a[i]);
	return 0;
}