int main()
{
	int i,j,n;
	char a[256],b[5];
	scanf("%d",&n);
	gets(b);
	for(i=0;i<n;i++)
	{
		gets(a);//gets(a);
		for(j=0;a[j]!='\0';j++)
		{
			switch(a[j])
			{
				case 'A':a[j]='T';break;
				case 'T':a[j]='A';break;
				case 'C':a[j]='G';break;
				case 'G':a[j]='C';break;
			}
		}
		puts(a);
		//printf("%s",a);
	}
	return 0;
}

