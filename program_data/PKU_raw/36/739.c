void main()
{
	char a[10],b[10];
	int i,j;
	char m;
	scanf("%s %s",a,b);
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(b[j]==a[i])
			{
				if(a[i]=='\0')
					break;
				m=b[i];
				b[i]=b[j];
				b[j]=m;
			}
		}
	}
	if(strcmp(a,b)!=0)
		printf("NO");
	else
		printf("YES");
}