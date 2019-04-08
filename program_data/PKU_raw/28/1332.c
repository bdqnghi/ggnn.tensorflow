int main()
{
	char str[6000];
	int a[300];
	int i,j,num;
	gets(str);
	for (j=0,i=1,num=1;str[i]!='\0';i++)
	{
		if (str[i]!=' ')
		{
			if (str[i-1]==' ')
			{
				a[j]=num;
				num=1;
				j++;
			}
			else
				num++;
		}
	}
	for (i=0;i<j;i++)
		printf("%d,",a[i]);
	printf("%d",num);
	return 0;
}