void main()
{
	int n=0,i,j,k;
	char str[200];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		n++;
	}
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			int flag=1;
			for(k=0;k<i;k++)
			{
				if(str[j+k]!=str[j+i-1-k])
				{
					flag=0;
				}
			}
			if(flag)
			{
				for(k=j;k<=i+j-1;k++)
				{
					printf("%c",str[k]);
				}
				printf("\n");
			}
		}
	}
}

