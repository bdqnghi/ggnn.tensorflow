int main()
{
	int m,a,i,j,k,b,c,d,e=0;
	scanf("%d",&m);
	a=m/2;
	for(i=3;i<=a;i=i+2)
	{
		for(j=3;j<=sqrt(i);j=j+2)
		{
			b=i%j;
			if(b==0)
			{e++;break;}
		}
		c=m-i;
		for(k=3;k<=sqrt(c);k=k+2)
		{
			d=c%k;
			if(d==0)
			{e++;break;}
		}
		if(e==0)
		printf("%d %d\n",i,c);
		e=0;
	}
	return 0;
}

