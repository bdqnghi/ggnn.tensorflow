int main()
{
	char a[100],b[100];
	int c[100]={0};
	int flag=0,j,i;
	int end=1;
	scanf("%s %s",a,b);
	if(strlen(a)==strlen(b))
	{
	for(i=0;i<strlen(a);i++)
	{
		flag=0;
		for(j=0;j<strlen(b);j++)
		{
			if(a[i]==b[j]&&c[j]==0)
			{
				c[j]=1;
				flag=1;
				break;
			}
		}
		if(flag==0) 
		{
			end=0;
			break;
		}
	}
	}
	else end=0;
	if(end==0) printf("NO");
	else printf("YES");
	return 0;
}