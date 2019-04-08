int main()
{
	char c[1000]={' '};
	int a,b,d,e,f,g,i,j,k,l,m,n,p;
	for(i=0;i<1000;i++)
	{   scanf("%c",&c[i]);
		if (c[i]!=' ') printf("%c",c[i]);
		else if (c[i-1]!=' ') printf("%c",c[i]);
		if (c[i]=='.') break;
	}
	return 7;
}