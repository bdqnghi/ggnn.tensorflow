void main()
{
	char str[1000],*p;
	int a[300]={0},k=0,i,space=0,word=0;
	gets(str);
	p=str;
	while(*p==' ')
		p++;
	while(*p!='\0')
	{
		if(*p==' ')
		{
			space++;
			word=0;
		}
		if(space==1)
		{
			k++;
			space++;
		}
		if(*p!=' ')
		{

			a[k]++;
			space=0;
			
		}
		p++;
	}
	for(i=0;i<k;i++)
		printf("%d,",a[i]);
	printf("%d\n",a[k]);
}
