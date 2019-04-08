int s[100001];
int main()
{
	int n,i,j;
	scanf("%d",&n);
	struct{
		int id,chin,math,su;
	}s[100001];
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&s[i].id,&s[i].chin,&s[i].math);
        s[i].su=s[i].chin+s[i].math;
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].su<s[j].su)
			{
				s[100000]=s[i];
				s[i]=s[j];
				s[j]=s[100000];
			}
		}
	}
	printf("%d %d\n%d %d\n%d %d",s[0].id,s[0].su,s[1].id,s[1].su,s[2].id,s[2].su);
	return 0;
}