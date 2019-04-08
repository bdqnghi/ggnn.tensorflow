int main(int argc, char* argv[])
{
	int n,i,j,b,c,d=0;
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		b=1;
		c=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{b=0;}
		}
		for(j=2;j<i+2;j++)
		{
			if((i+2)%j==0)
			{c=0;}
		}
		if((b*c)!=0)
		{printf("%d %d\n",i,i+2);
		d++;}
	}
		if(d==0)
		{printf("empty");}
	return 0;
}