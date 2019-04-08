int main()
{
	char s[300][300];
	int n,i,l,x=0,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for (i=0;i<n;i++)
	{
		l=strlen(s[i]);
		x+=l;
		if (x==80)
		{
			printf("%s\n",s[i]);
			x=0;
		}
		else if(x>80)
		{
			if (i==n-1)
			{
				printf("\n%s\n",s[i]);
			}
			else
			{
			printf("\n%s ",s[i]);
			}	
			x=l+1;
		}
		else 
		{
			j=strlen(s[i+1]);
			if (i==n-1)
			{
				printf("%s\n",s[i]);
			}
			else
			{
				if (x+j+1>80)
				{
					printf("%s",s[i]);
				}
				else 
				{
					printf("%s ",s[i]);
				}
			}	
			x+=1;
		}
	}
	return 0;
}
