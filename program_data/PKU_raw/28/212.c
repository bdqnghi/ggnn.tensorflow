void main()
{
	char *p,str[10000];
	int a[10000]={0},i=0,j=0,b[10000],t=0;
	gets(str);
	for(p=str;*p!='\0';p++)
	{
		if(*p==' ')
		{
			i++;
		}
		else
		{
			a[i]++;
		}
	}
	for(j=0;j<1000;j++)
	{
		if(a[j]!=0)
		{
			b[t]=a[j];
			t++;
		}
	}
	printf("%d",b[0]);
	for(i=1;i<t;i++)
	{
		printf(",%d",b[i]);
	}
}
