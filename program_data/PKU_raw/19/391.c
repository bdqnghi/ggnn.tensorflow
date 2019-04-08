void main()
{
	char str[100]={""},sr[100]={""};
	char wrd[100]={""};
	char wod[100]={""};
	char wd[100]={""};
	int i,j=0,k,n,m;
	gets(str);
	gets(wrd);
	gets(wod);
	n=strlen(str);
	for(i=0;i<=n;i++)
	{
		if((*(str+i)!=' ')&&(*(str+i)!='\0'))
		{
			*(wd+j)=*(str+i);
			j=j+1;
		}
		else 
		{
			j=0;
			m=strlen(wd);
			if(strcmp(wd,wrd)==0)
			{
                for(k=i-m;k<i;k++)*(str+k)='\0';
				for(k=i;k<n;k++)
				{
					*(sr+k-i)=*(str+k);
					*(str+k)='\0';
				}
				strcat(str,wod);
				strcat(str,sr);
				n=strlen(str);
				for(k=0;k<(n-i);k++)*(sr+k)='\0';
				for(k=0;k<m;k++)*(wd+k)='\0';
			}
			else for(k=0;k<m;k++)*(wd+k)='\0';
		}
	}
	puts(str);
}