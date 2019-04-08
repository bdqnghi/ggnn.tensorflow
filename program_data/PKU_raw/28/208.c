void main()
{
	char str[3000];
	int a[300],i=0,j,flag=0,n;
	gets(str);
	for(i=0;i<300;i++)
		a[i]=0;
	i=0;
	for(j=-1;;)
	{
		j++;
		if(str[j]=='\0')break;
		else if(str[j]==' ')
			flag=1;
		else
		{
			if(flag==0)
				a[i]++;
			else
			{	i++;
			n=i;
			a[i]++;
			flag=0;
			}
			    
		}
	}
	if(j==1)
		printf("%d",a[0]);
	else
	{
		printf("%d",a[0]);
		for(i=1;i<=n;i++)
		printf(",%d",a[i]);
	}
}
