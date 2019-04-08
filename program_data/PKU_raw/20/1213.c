int max(char a[])
{
	int i,m=0;
	for(i=1;a[i]!=0;i++)
	{
		if(a[m]<a[i]) m=i;
		else continue;
	}
	return m;
}
void cao(char a[],char b[])
{
	int i,m=0;
	char c[10]={0};
	for(i=max(a)+1;a[i]!=0;i++)
	{
		c[m]=a[i];
		m++;
		a[i]=0;
	}
	strcat(a,b);
	strcat(a,c);
}
int main()
{
	char a[12]={0},b[4]={0};
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		cao(a,b);
		puts(a);
		for(i=0;i<12;i++) a[i]=0;
		for(i=0;i<4;i++) b[i]=0;
	}
}