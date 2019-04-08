void main()
{
	int i,n=0,m=0,a[300],k=-1;
	char string[2000];
	gets(string);
    char c;
	for(i=0;(c=string[i])!='\0';i++)
	{   
		n=n+1;
		if(c==' ') 
		{
			a[m]=i-k-1;
			k=i;
			m++;
		}
	}
	a[m]=n-m;
	for(i=0;i<m;i++)
	{
		a[m]=a[m]-a[i];
	}
	for(i=0;i<m;i++)
	{
		if(a[i]!=0)  printf("%d,",a[i]);
	}
	printf("%d\n",a[m]);
}
