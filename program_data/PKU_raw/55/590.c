int v(int y,int z)
{
	int k=1,j;
	for(j=0;j<z;j++)
		k=k*y;
	return(k);
}
void main()
{
	int n,m,i,k,l;
	char a[100],b[200];
	long x=0;
	scanf("%d %s %d",&n,a,&m);
	l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		if(a[i]>='0'&&a[i]<='9')
			x=x+(a[i]-'0')*v(n,l-1-i);
		else x=x+((a[i]-'A')%('a'-'A')+10)*v(n,l-1-i);
	}
	for(i=0;;i++)
	{
		if(x%m>=0&&x%m<=9)
			b[i]=x%m+'0';
		else
			b[i]=x%m-10+'A';
		x=(x-x%m)/m;
		if(x==0) 
			break;
	}
	for(k=i;k>=0;k--)
		printf("%c",b[k]);
}