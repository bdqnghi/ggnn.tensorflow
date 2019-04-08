void main()
{
	char a[100];
	char b[100];
	scanf("%s %s",a,b);
	int s,t;
	s=strlen(a);
	t=strlen(b);
	int i,j,k;
	char r;
	for(i=0;i<s;i++)
	{
		for(j=i;j<t;j++)
		{
			if(b[j]==a[i])
			{
				r=b[i];
				b[i]=b[j];
				b[j]=r;
			}
		}
	}
		k=strcmp(a,b);
		if(k==0)
			printf("YES");
		else
			printf("NO");
}