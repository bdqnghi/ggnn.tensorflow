void main()
{
	char a[85];
	int i,j,k,m;
	scanf("%d\n",&k);
	for(i=0;i<k;i++)
	{
		m=1;
		gets(a);
		if((a[0]>='a' && a[0]<='z') || (a[0]<='Z' && a[0]>='A') || a[0]=='_')
		{
			for(j=1;a[j]!='\0';j++)
			{
				if((a[j]>='a' && a[j]<='z') || (a[j]<='Z' && a[j]>='A') || a[j]=='_' || (a[j]>='0' && a[j]<='9'))
					continue;
				else
				{
					m=0;
					break;
				}
			}
		}
		else
			m=0;
		printf("%d\n",m);
	}
}		
	

