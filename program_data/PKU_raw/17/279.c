char a[200],b[200];
int l;
void f36(int i)
{
	int j;
	for(j=i+1;j<l;j++)
	{
		if(b[j]!=32)
		{
			if(b[j]==63) {b[j]=32;b[i]=32;}
			break;
		}
	}
}
int g(void)
{
	gets(a);
	if(a[0]==0) return 0;
	else return 1;
}
void k(void)
{
	l=strlen(a);
	int i,n=0,p;
	for(i=0;i<l;i++)
	{
		b[i]=32;
		if(a[i]==40) {b[i]=36; n=n+1;}
		if(a[i]==41) {b[i]=63; n=n+1;}
	}
	for(p=1;p<=n;p++)
	for(i=0;i<l;i++)
	{
		if(b[i]==36) f36(i);
	}
	printf("%s\n",a);
	for(i=0;i<l;i++) printf("%c",b[i]);
	printf("\n");
	a[0]=0;
}
int main()
{
	int n=1;
	while(n==1) 
	{
		n=g();
		if(n==0) break;
		k();
	}
	return 0;
}