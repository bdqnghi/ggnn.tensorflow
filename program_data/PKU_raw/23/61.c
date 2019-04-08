void main()
{
	int i=0;
	char a[10][10];
	scanf("%s",a[i]);
		for(i=1;getchar()!='\n';i++)
			scanf("%s",a[i]);
		for(i=i-1;i>=0;i--)
		{
			if(i==0)
			printf("%s",a[i]);
			else
			printf("%s ",a[i]);
		}
}