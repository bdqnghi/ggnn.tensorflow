
void checkit(char a[101])
{
	int i,n;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	if(a[0]=='0')checkit(a);
}

void doit(char a[101],char b[101])
{
	int x,y,i,m;
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<y;i++)
	{
		m=a[x-1-i]-b[y-1-i]+48;
		if(m<48)
		{
			a[x-2-i]=a[x-2-i]-1;
			m=m+10;
		}
		a[x-1-i]=m;
	}
	if(a[0]=='0')checkit(a);
}

void main()
{
	char a[20][101],b[20][101];
	int n,i;
	scanf("%d",&n);
	scanf("%s",a[0]);
	scanf("%s",b[0]);
	for(i=1;i<n;i++)
	{
		getchar();
		scanf("%s",a[i]);
		scanf("%s",b[i]);
	}
	for(i=0;i<n;i++)
	{
		doit(a[i],b[i]);
		printf("%s\n",a[i]);
	}
}