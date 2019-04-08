int main()
{
	int i,j,la,lb;
	char a[100],b[100];
	scanf("%s%s",a,b);
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
	{
		printf("NO");
		return 0;
	}
	for(i=0;i<la;i++)
	{
		if(strchr(b,a[i])==0)
		{
			printf("NO");
			return 0;
		}
		else
		{
			for(j=0;j<lb;j++)
			{
				if(b[j]==a[i])
				{
					b[j]=' ';
					break;
				}
			}
		}


	}
	
	printf("YES");
	return 0;
}

