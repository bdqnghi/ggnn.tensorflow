void main()
{
	char a[100],b[100];
	int flag=0,i,j,len,c[100]={'0'};
	scanf("%s%s",a,b);
	len=strlen(a);
	if(strlen(a)!=strlen(b))
		printf("NO");
	else
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if(c[j]==0)
				{
					if(a[i]==b[j])
					{
						c[j]=1;
						break;
					}
				}
			}
		}
		for(j=0;j<len;j++)
		{if(c[j]==0) flag=1;}
		if(flag)
			printf("NO");
		else
			printf("YES");

	}


}

