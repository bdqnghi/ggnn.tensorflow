char a[100000];
int main()
{
	char b[100][100];
	gets(a);
	int l=strlen(a);
	int n=0,k=0,i;
	for(i=0;i<l;i++)
	{
		if(a[i]!=' '&&a[i]!=',')
		{
			b[n][k]=a[i];
			k++;
		}
		else
		{
			b[n][k]='\0';
			n++;
			k=0;
		}
	}
	b[n][k]='\0';
	int len[100],m=0;
	for(i=0;i<=n;i++)
	{
		len[m]=strlen(b[i]);
		m++;
	}
	int ma=len[0];
	int pan=0;
	for(i=0;i<m;i++)
	{
		if(ma!=len[i])
		{
			pan=1;
			break;
		}
	}
	if(pan==0)
	{
		printf("%s\n",b[0]);	
		printf("%s\n",b[0]);

	}
	else
	{
		int max=len[0],min=len[0];
		int pp;
		for(pp=0;pp<=n;pp++)
		{
			if(len[pp]>max)
			{
				int e;
				e=max;
				max=len[pp];
				len[pp]=e;
			}
		}
		for(pp=0;pp<=n;pp++)
		{
			if(len[pp]<min&&len[pp]!=0)
			{
				int e1;
				e1=min;
				min=len[pp];
				len[pp]=e1;
			}
		}
		for(pp=0;pp<=n;pp++)
		{
			if(strlen(b[pp])==max)
			{
				printf("%s\n",b[pp]);
				break;
			}
		}
		for(pp=0;pp<=n;pp++)
		{
			if(strlen(b[pp])==min)
			{
				printf("%s\n",b[pp]);
				break;
			}
		}
	}
	return 0;
}


