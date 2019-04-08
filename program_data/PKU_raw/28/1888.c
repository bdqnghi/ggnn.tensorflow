int main()
{
	char a[3000];
	int i,x,t;
	int num=0;
	gets(a);
	for(t=0;a[t]==' ';)
	{t++;}
	for(i=0;a[i+t]!='\0';i++)
	{
		a[i]=a[i+t];
	}
	a[i]='\0';
	for(i=0,x=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			num=num+1;
		}
		else if(a[i]==' ')
		{
			if(a[i-1]==' ')
				continue;
			else if(x==0)
			{
				printf("%d",num);
				num=0;
			}
			else
			{
				printf(",%d",num);
				num=0;
			}
			x++;
		}
	}
	if(a[i-1]!=' '&&x!=0)
		printf(",%d",num);
	else if(a[i-1]!=' '&&x==0)
		printf("%d",num);

	printf("\n");
	return 0;
}