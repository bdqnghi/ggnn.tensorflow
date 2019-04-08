int main()
{
	int n,i,j,k,e,js,t;
	char s[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=0;
		scanf("%s",s);
		e=strlen(s);
		int zifu[100001]={0};
		for(j=0;j<e-1;j++)
		{
			js=1;
			for(k=j+1;k<e;k++)
			{
				if(s[j]==s[k])
				{
					zifu[j]=js;
					zifu[k]=js;
				}
			}
		}
		for(j=0;j<e;j++)
		{
			if(zifu[j]==0)
			{
				printf("%c\n",s[j]);
				t=1;
				break;
			}
		}
		if(t==0)
		{
			printf("no\n");
		}
	}
	return 0;
}