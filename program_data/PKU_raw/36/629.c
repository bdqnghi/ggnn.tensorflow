void main()
{
	char a[100],b[100];
	int i,l1,l2,j;
	int m=0;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		printf("NO");
	else
	{
		for(i=0;i<l1;i++)
			for(j=0;j<l1;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='\0';
					m=1;
					break;
				}
				else
					m=0;
			}
		if(m)
			printf("YES");
		else
			printf("NO");
	}
	
}