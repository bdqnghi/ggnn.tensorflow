void main()
{
	char a[50],b[50];
	int i,j,m,n;
	int flag;
	scanf("%s%s",&a,&b);
	for(i=1;;i++)
	{
		if(a[i]=='\0')
		{
			m=i;
			break;
		}
	}
	for(i=1;;i++)
	{
		if(b[i]=='\0')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		if(b[i]==a[0])
		{
			for(j=0;j<m;j++)
			{
				if(b[i+j]==a[j])
					flag++;
				else
					break;
			}
			if(flag==m)
			{
				printf("%d",i);
				break;
			}
		}
	}
}
		
