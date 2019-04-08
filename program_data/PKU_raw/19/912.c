int main()
{
	char a[N],b[N],c[N];
	gets(a);
	gets(b);
	gets(c);
	int i=0;
	while(i<strlen(a))
	{
		if(i==0)
		{
			if(a[i]==b[0])
			{
				int j;
			    for(j=0;j<strlen(b);j++)
				{
					if(a[i+j]!=b[j])
					{
						break;
					}
				}
				if(j==strlen(b))
				{
					printf("%s",c);
					i+=strlen(b);
				}
				else
				{
					printf("%c",a[i]);
					i++;
				}
			}
			else
			{
				printf("%c",a[i]);
					i++;
			}
		}
		else
		{
			if(a[i]==b[0]&&a[i-1]==' ')
			{
				int j;
				for(j=0;j<strlen(b);j++)
				{
					if(a[i+j]!=b[j])
					{
						break;
					}
				}
				if(j==strlen(b))
				{
					printf("%s",c);
					i+=strlen(b);
				}
				else
				{
					printf("%c",a[i]);
					i++;
				}
			}
			else
			{
				printf("%c",a[i]);
				i++;
			}
		}
	}
	return 0;
}