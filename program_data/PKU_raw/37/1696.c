int main()
{
	int n,i,j,k,min,get;
	char a[100010];
	int b[26];
	int c[26];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		for(j=0;j<26;j++)
			b[j]=0;
		for(j=0;j<26;j++)
			c[j]=0;
		for(j=0;;j++)
		{
			if(a[j]=='\0')
				break;
			b[a[j]-'a']+=1;
		}
		for(j=0;j<26;j++)
		{
			if(b[j]==1)
			{
				for(k=0;;k++)
				{
					if((a[k]-'a')==j)
					{
						c[j]=k;
						break;
					}
				}
			}
			else
				c[j]=-1;
		}
		get=0;
		for(j=0;j<26;j++)
		{
			if(c[j]!=-1)
			{
				min=j;
				break;
			}
		}
		for(j=0;j<26;j++)
		{
			if(c[j]==-1)
				continue;
			else
			{
				get=1;
				if(c[j]<c[min])
					min=j;
			}
		}
		if(get==0)
			printf("no\n");
		else
			printf("%c\n",min+'a');
	}
	return 0;
}
