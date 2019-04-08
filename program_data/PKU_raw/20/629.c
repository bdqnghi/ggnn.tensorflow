
void main()
{

	char a[20]={0},b[4]={0},max;
while (scanf("%s%s",a,b)!=EOF)
	{
	
	int n,i,maxnum;
	

	n=strlen(a);
	maxnum=0;max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxnum=i;
		}
	}

	for(i=n;i>maxnum;i--)
		a[i+3]=a[i];
	for(i=0;i<3;i++)
		a[maxnum+1+i]=b[i];
	printf("%s\n",a);
	}
}