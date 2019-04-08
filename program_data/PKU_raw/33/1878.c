int main()
{
	int n,i,j;
	char a[255];
	 int len;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		len=strlen(a);
		for(j=0;j<len-1;j++)
		{
			if(a[j]=='A')
			{
                printf("T");
			}
			else if(a[j]=='T')
			{
				printf("A");
			}
			else if(a[j]=='C')
			{
				printf("G");
			}

			else if(a[j]=='G')
			{
				printf("C");
			}
		}

		if(a[len-1]=='A')
			{
                printf("T\n");
			}
		else if(a[len-1]=='T')
			{
				printf("A\n");
			}
		else if(a[len-1]=='C')
			{
				printf("G\n");
			}
		else if(a[len-1]=='G')
			{
				printf("C\n");
		}
	}

	return 0;

	}