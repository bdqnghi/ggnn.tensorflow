void ercha(int *p)
{
	while(*p!=1)
	{
        p++;
		*p=(*(p-1))/2;
	}
}
void main()
{
	int a[11]={0},b[11]={0},m,n,i,j;
	scanf("%d%d",&m,&n);
	a[0]=m;
	b[0]=n;
    ercha(a);
	ercha(b);
	for(i=0;i<11;i++)
	{
		if(a[i]>b[0]){continue;}
		else
		{
			for(j=0;j<10;j++)
			{
				if(a[i]==b[j])
				{
					printf("%d",a[i]);
					break;
				}
			}
			if(a[i]==b[j])break;
		}
	}
}