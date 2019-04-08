int andian(int a[8][8],int j,int k,int h,int l)
{
	int b=1,p;
	for(p=0;p<h;p++)
	{
		if(a[j][k]>a[p][k])
			b=b*0;
	}
	for(p=0;p<l;p++)
	{
		if(a[j][k]<a[j][p])
			b=b*0;
	}
	return(b);
}
void main()
{
	int a,b,c[8][8]={0},j,k,r=0;
	scanf("%d,%d",&a,&b);
	for(j=0;j<a;j++)
	{
		for(k=0;k<b;k++)
		{
			scanf("%d",&c[j][k]);
		}
	}
	for(j=0;j<a;j++)
	{
		for(k=0;k<b;k++)
		{
			if((andian(c,j,k,a,b)==1))
			{
				printf("%d+%d\n",j,k);
				r=r+1;
			}
		}
	}
	if(r==0)
		printf("No\n");
}