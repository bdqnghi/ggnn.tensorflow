int main()
{
	int n;
	int i,j;
	char s[21];
	int yn[1000];
	for(i=0;i<1000;i++)
	{
		yn[i]=1;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		if((s[0]!='_')&&(s[0]<'A'||s[0]>'Z')&&(s[0]<'a'||s[0]>'z'))
		{
			yn[i]=0;
		}
		else
		{
			for(j=0;s[j];j++)
			{
				if((s[j]!='_')&&(s[j]<'A'||s[j]>'Z')&&(s[j]<'a'||s[j]>'z')&&(s[j]<'0'||s[j]>'9'))
				{
					yn[i]=0;
				}
			
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		if(yn[i]==0)
		{
			printf("no\n");
		}
		else
			printf("yes\n");
	}
	return 0;
}
