void bubble(int a[],int l)
{
	int i,j;
	int t;
	for(i=1;i<l;i++)
		for(j=0;j<l-i;j++)
			if(*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
}
void main()
{
	int i,j,k,n,min=50,max=0,maxt,mint;
	int l[503]={0};
	char c[203][50]={0};
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s",c+i);
		*(l+i)=strlen(c+i);
	}

    for(i=0;i<n;i++)
	{
		if(*(l+i)>max)
		{
            max=*(l+i);
			maxt=i;
		}
		if(*(l+i)<min)
		{
			min=*(l+i);
			mint=i;
		}
	}
	if(min==max)
		printf("%s\n%s",c,c);
	else
		printf("%s\n%s",*(c+maxt),*(c+mint) );

}