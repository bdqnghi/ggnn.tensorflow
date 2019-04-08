void main()
{
	int n,i,j,p=0;
	char a[50],b[50];
	scanf("%s %s",a,b);
	n=strlen(a);
	if(n!=strlen(b))printf("NO");
	else
	{
		for(i=0;i<n;i++)
		{
			p=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					p=1;
					b[j]=2;
					break;
				}
			}
			if(p==0)
			{
				printf("NO");
				p=3;
				break;
			}
		}
		if(p!=3)
			printf("YES");
	}
}