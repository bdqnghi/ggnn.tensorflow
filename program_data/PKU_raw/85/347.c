int main()
{
	int n,i,j,check;
	char a[21];
	check=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		for(j=0;j<=strlen(a)-1;j++)
		{if(!((a[j]>='0'&&a[j]<='9')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||a[j]=='_')||(j==0&&a[j]>='0'&&a[j]<='9'))
			{check=0;
 			break;
			}
		}
			if(check==0)
			{	printf("no");
			printf("\n");
			}
			else
			{	printf("yes");
			printf("\n");
			}
			check=1;
			for(j=0;j<=strlen(a)-1;j++)
				a[i]=0;
	}
			
	return 0;
}

