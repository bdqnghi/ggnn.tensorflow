
int main()
{
	char s1[1000];
	cin.getline(s1,999);
	char s2[300][100];
	int i,j,l=0,n=0;
	int len;
	len=strlen(s1);
	for(i=0;i<=len;i++)
	{
		if(s1[i]!=' '&&s1[i]!='\0')
		{
			s2[l][n]=s1[i];
		    n++;
		}
		if(s1[i]==' '||s1[i]=='\0')
		{
			s2[l][n]='\0';
			l++;
			n=0;
		}
	}
	int sz[300];
	for(j=0;j<l;j++)
	{
		sz[j]=strlen(s2[j]);
		if(sz[j]!=0)
		{
		cout<<sz[j];
		if(j<l-1)
			cout<<",";
		}
	}
	
	
	


    
	return 0;
}
	
