int main()
{
	char a[100],b[100],c[100],t=1;
	char tihuan[100][100];
	int i,j=0,m=-1,n;
	gets(a);
	scanf("%s",b);
	scanf("%s",c);
	for(i=0;;i++)
	{
		if(a[i]==' ')
		{
			n=m;
			m=i;
			strncpy(tihuan[j],a+n+1,m-n-1);
				tihuan[j][m-n-1]='\0';
				j++;
		}
		if(a[i]=='\0')
		{
			n=m;
			m=i;
				strncpy(tihuan[j],a+n+1,m-n-1);
				tihuan[j][m-n-1]='\0';
				j++;
				break;
		}
	}
	for(i=0;i<j;i++)
	{
		if(strcmp(tihuan[i],b)==0)
		{
			strcpy(tihuan[i],c);
		}
	}
	for(i=0;i<j;i++)
		if(t)
		{
		printf("%s",tihuan[i]);
		t=0;
		}
		else
			printf(" %s",tihuan[i]);
	return 0;
}

