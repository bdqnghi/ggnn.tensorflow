void main()
{
	long a,b[8]={0},c=0,d=0,i,s=0;
	scanf("%d",&a);
	for(i=3;i<=7;i=i+2)
	{
		if(a%i==0)
		{
			b[i]=i;
			c++;
		}
	}
	for(i=3;i<=7;i=i+2)
		s=s+b[i];
	if(s==0)
	printf("n");
        else
	for(i=3;i<=7;i=i+2)
	{
if(b[i]!=0)
		{printf("%ld",b[i]);
		d++;
		if(d<c)
			printf(" ");}
	}
}