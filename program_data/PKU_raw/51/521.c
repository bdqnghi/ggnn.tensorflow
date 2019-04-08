char b[500][5]={' '};
int n;
int is(int i, int j);
int main()
{
	int i, j, k;
	scanf("%d", &n);
	getchar();
	char a[501]={' '};
	int max=0, bs[500]={0};
	scanf("%s", a);
	int s;
	s=strlen(a);
	for(i=0;i<=s-n;i++)
	{
		for(j=i,k=0;k<n;j++, k++)
		{			
			b[i][k]=a[j];
		}
	}
	char c[500]={' '};
	for(i=0;i<=s-n;i++)
	{
		if(c[i]=='1')
		{
			i++;
			continue;
		}
		else
		{
			for(j=0;j<=s-n;j++)
			{
				if(is(i, j))
				{
					bs[i]+=1;
					if(bs[i]>1)
						c[j]='1';				
				}
			}
		}
	}
	for(i=0;i<=s-n;i++)
		if(max<bs[i])
			max=bs[i];	
		if(max>1)
		{
			printf("%d\n", max);
			for(i=0;i<=s-n;i++)
			{
				if(bs[i]==max)
				{					
					printf("%s\n", b[i]);
				}
			}
		}
		else
			printf("NO\n");
		return 0;
}

int is(int i, int j)
{
	int k, s=0;
	for(k=0;k<n;k++)
	{
		if(b[i][k]==b[j][k])
			s+=1;
	}
	if(s==n)
		return 1;
	else
		return 0;
}





