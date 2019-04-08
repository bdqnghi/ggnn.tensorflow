void main()
{
	char c[3000];
	gets(c);
	int i,j,len,temp;
	len=strlen(c);
	c[len]=' ';
	int a[100];
	j=1;
	for(i=0;i<=len;i++)
	{
		if(c[i]==' ')
		{
			a[j]=i;
			j++;
		}
	}
	printf("%d",a[1]);
	for(i=2;i<j;i++)
	{
		temp=a[i]-a[i-1]-1;
		if(temp!=0)
			printf(",%d",temp);
	}
}




