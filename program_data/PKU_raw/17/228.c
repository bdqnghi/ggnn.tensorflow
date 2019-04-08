int main()
{
	char a[500],b[500]={0};
	int n,i,k,j,jud[500]={0},max=0;
	for(i=0;i<500;i++)
		{
			a[i]=0;jud[i]=0;
		}
	while(scanf("%s",a)!=EOF)
	{
		for(i=0;i<500;i++)
		{
			b[i]=0;
		}
		for(i=0;i<strlen(a);i++)
		{
			b[i]=' ';
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='('&&jud[j]==0)
					{
						jud[j]=1;
						jud[i]=1;
						break;
					}
				}
			}
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='('&&jud[i]==0)
			{
				b[i]='$';
				
			}
			if(a[i]==')'&&jud[i]==0)
			{
				b[i]='?';
				
			}
		}
		printf("%s\n%s\n",a,b);
		for(i=0;i<500;i++)
		{
			a[i]=0;jud[i]=0;
		}
	}
}