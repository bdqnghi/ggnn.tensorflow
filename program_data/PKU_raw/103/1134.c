struct point
{
	int x;
	char y;
};
int main()
{
	char c[1100];
	int i,j,n,b=0;
	struct point dian[27];
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='a')
			c[i]=c[i]-32;
	}
	dian[0].y=c[0];
	j=0;
	dian[0].x=1;
	for(i=1;i<n;i++)
	{
		if(c[i]==c[i-1])
		{
			dian[j].x+=1;
		}
		else
		{
			j++;
			dian[j].y=c[i];
			dian[j].x=1;
		}
	}
	for(i=0;i<=j;i++)
	{
		printf("(%c,%d)",dian[i].y,dian[i].x);
	}
	return 0;
}
