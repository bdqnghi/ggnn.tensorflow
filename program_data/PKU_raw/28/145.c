void main()
{
	int i,j;
	int flag=0;
	int flagdh=0;
	char a[1000];
	int counts=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]!='\0')
		{
			if(flag==0&&a[i]!=' ')
			{
				flag=1;
				counts++;
			}
			else if(flag==1&&a[i]!=' ')
			{
				counts++;
			}
			else if(flag==1&&a[i]==' ')
			{
				flag=0;
				if(flagdh==0)
				{
					flagdh=1;
					printf("%d",counts);
				}
				else
				{
					printf(",%d",counts);
				}
				counts=0;
			}
		}
		else
		{
			if(flag==1)
			{
				if(a[i]!=' ')
				{
					counts++;
					if(flagdh==0)
					{
						printf("%d",counts);
					}
					else
					{
						printf(",%d",counts);
					}
				}
				else
				{
					if(flagdh==0)
					{
						printf("%d",counts);
					}
					else
					{
						printf(",%d",counts);
					}
				}
			}
			else
			{
				if(a[i]!=' ')
				{
					if(flagdh==0)
					{
						printf("1");
					}
					else
					{
						printf(",1");
					}
				}
			}
		}
	}
}

	