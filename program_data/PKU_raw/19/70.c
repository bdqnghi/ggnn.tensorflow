int main()
{
	int j,i,k,m;
	char s[100],a[20],b[20],z[50][20];
	gets(s);
	gets(a);
	gets(b);
	for(i=0,j=0,k=0;i<100;i++)
	{
		if(s[i]==' ') {z[j][k]='\0';j++;k=0;}
		if(s[i]!=' '&&s[i]!='\0') {z[j][k]=s[i];k++;}
		if(s[i]=='\0') {z[j][k]='\0';m=j;break;}
	}
	for(i=m;i>=0;i--)
	{
		if(strcmp(a,z[i])==0) strcpy(z[i],b);
	}
	for(i=0;i<=m;i++)
	{
		if(i<m)
			printf("%s ",z[i]);
		if(i==m)
			printf("%s",z[i]);
	}
	return 0;
}







