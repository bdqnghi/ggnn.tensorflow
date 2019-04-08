void dd(char a[],char b[])
{
	int i,j=0,m,max;
	m=strlen(a);
	max=a[0];
	for(i=0;i<m;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			j=i;
		}
	}
	for(i=m;i>j;i--)
	{
		a[i+3]=a[i];
	}
	a[j+1]=b[0];
	a[j+2]=b[1];
	a[j+3]=b[2];
	for(i=0;i<m+3;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}
void main()
{
	char a[20],b[5];
	
    while(scanf("%s%s",a,b)!=EOF)
{
	dd(a,b);
	}
	
}
