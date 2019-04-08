int main()
{
	int t,i,j;
	char m[100],n[100];
	scanf("%d",&t);
	int max=0,min=100;
	for(i=0;i<t;i++)
	{
		char a[100];
		scanf("%s",a);
		int p;
		p=strlen(a);
		if(p>max)
		{
			for(j=0;j<p;j++)
				m[j]=a[j];
		    max=p;
		}
		if(p<min)
		{
			for(j=0;j<p;j++)
				n[j]=a[j];
			min=p;
		}
	}
	for(i=0;i<max;i++)
		printf("%c",m[i]);
		printf("\n");
	for(i=0;i<min;i++)
		printf("%c",n[i]);
	return 0;
}
