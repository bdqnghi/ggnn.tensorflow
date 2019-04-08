int main()
{
	char s[500],w[500],e[500][500],c[500];
	int i,j,m,n,k=0;
	scanf("%s %s %s",w,s,c);
	n=strlen(w);
	m=strlen(s);
	for(i=0;w[i+m-1]!='\0';i++)
	{
		for(j=0;j<m;j++)
		{
			e[i][j]=w[i+j];
		}
	e[i][j]='\0';
	}
for(i=0;i<n-m+1;i++)
{
	if(strcmp(e[i],s)==0) 
	{
		k=1;
		break;
	}
}
int a;
a=i;
	if(k==1)
	{
		for(i=0;i<m;i++)
		{
			w[a+i]=c[i];
		}
		printf("%s",w);
	}
	else if(k==0)
	{
		printf("%s",w);
	}
return 0;
}
