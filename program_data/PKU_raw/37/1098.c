void DeleteChar(char s[],char a)
{
	int i,j;
	for(i=j=0;s[j]!='\0';j++)
	{
		if(s[j]!=a)
		{
			s[i]=s[j];
			i++;
		}
	}
	s[i]='\0';
}



void main()
{
	int n,i,j,k,p;
	char a[100001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			for(k=j+1,p=1;a[k]!='\0';k++)
			{
				if(a[k]==a[j])
				{
					p=0;
					DeleteChar(a,a[j]);
					j--;
					break;
				}
			}
			if(p==1)
			{
				printf("%c\n",a[j]);
				break;
			}
		}
		if(p==0)
			printf("no\n");
	}
}

