int main()
{
	char a[500];
	int i,j,n,length;
	gets(a);
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		if(a[i]==a[i+1])
		{
			for(j=i;j<i+1;j++)
				printf("%c",a[j]);
			printf("%c\n",a[j]);
		}
	}
	for(n=1;n<length;n++)
	{
		for(i=0;i<length-n-1;i++)
		{
			if(a[i+1]==a[i])
			{
				if(a[i+n+1]==a[i-n])
				{
					if(a[i+n]==a[i-n+1])
					{
						for(j=i-n;j<i+n+1;j++)
							printf("%c",a[j]);
						printf("%c\n",a[j]);
					}
				}
			}
		}
	}
	return 0;
}