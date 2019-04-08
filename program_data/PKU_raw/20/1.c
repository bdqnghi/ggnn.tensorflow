void f(char a[],char b[3])
{
	int t=0,i,l;
	for (i=1;;i++)
	{
		if (a[i]>a[t])
			t=i;
		if (a[i]=='\0')
		{
			l=i;
			break;
		}
	}
	for (i=l;i>=t+1;i--)
	{
		a[i+3]=a[i];
	}
	a[l+3]='\0';
	for (i=t+1;i<=t+3;i++)
	{
		a[i]=b[i-t-1];
	}
	printf ("%s\n",a);
}
void main()
{
	char a[100][11]={0},b[3],i=0;
	for (i=0;i<5;i++)
	{
		scanf("%s %s",a[i],b);
		f(a[i],b);	
		if (a[i][0]=='\n') break;
	}
}