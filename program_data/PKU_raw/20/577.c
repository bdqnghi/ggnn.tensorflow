int pan(char s[],int n)
{
	int i=0,t,max,m;
	for(i=0;i<n;i++)
	{
		if(s[i]==' ') {t=i;break;}
	}
	for(i=t-1,max=s[t-1];i>=0;i--)
	{
		if(s[i]>=max) {max=s[i];m=i;}
	}
	return(m);
}



int kong(char s[],int n)
{
	int i,t;
	for(i=0;i<n;i++)
	{
		if(s[i]==' ') {t=i;break;}
	}
	return(t);
}




void main()
{
	char s[1000][20];int i,j,t,m;
	for(i=0;;i++)
	{
		gets(s[i]);
		if(s[i][0]=='\0') break;
	}
	for(i=0;;i++)
	{
		if(s[i][0]=='\0') break;
		else
		{
			 t=pan(s[i],strlen(s[i]));
			for(j=0;j<=t;j++)
			{	
				printf("%c",s[i][j]);
			}
			m=strlen(s[i]);
			printf("%c%c%c",s[i][m-3],s[i][m-2],s[i][m-1]);
			for(j=t+1;j<kong(s[i],m);j++)
			{
				printf("%c",s[i][j]);
			}
			printf("\n");
		}
	}
	
}
