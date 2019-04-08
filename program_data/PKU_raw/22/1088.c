
int main()
{
	int n,i,a[300],max=0,secondmax=0;
	char c;
	for(n=0;1;n++)
	{
		scanf("%d%c",&a[n],&c);
		if(a[n]>max)
		{
			secondmax=max;
			max=a[n];
		}
		if(a[n]>secondmax&&a[n]<max)
		{
			secondmax=a[n];
		}
		if(c=='\n')
			break;						//continue????????????????break????
	}
	if(secondmax==0)
		printf("No\n");
	else
		printf("%d\n",secondmax);
	return 0;
}