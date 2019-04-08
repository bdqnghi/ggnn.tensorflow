void main()
{
	char a[101],boy,girl;
	int i,k,len;
	
	scanf("%s",a);
	boy=a[0];
	len=strlen(a);
	for(i=0;i<len;i++)
	{\
		if(a[i]!=boy)
		{
			girl=a[i];
			break;
		}
	}

	for(i=0;i<len;i++)
	{
		if(a[i]==girl)
		{
			for(k=i-1;k>=0;k--)
			{
				if(a[k]==' ')
					continue;
				else if(a[k]==boy)
				{
					a[i]=' ';
				    a[k]=' ';
				    printf("%d %d\n",k,i);
					break;
				}
			}
		}
	}
	return;
}



