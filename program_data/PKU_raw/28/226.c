void main()
{
	char a[10000000],*p,d=0;
	int b[400]={0},i=0,j;
	gets(a);
	p=a;
	while(*p!='\0')
	{
		if(*p!=' ')
	{
		b[i]=b[i]+1;
		p++;d=1;
	}
		else if(*p==' ')
		{
			if(d==1)
			{
				i++;
				d=0;
			}
			if(*p!='\0')
				p++;
		}
	}
	printf("%d",b[0]);
	if(b[i]>0)
	for(j=1;j<=i;j++)
		printf(",%d",b[j]);
	else if(b[i]==0)
		for(j=1;j<i;j++)
			printf(",%d",b[j]);

}


			


