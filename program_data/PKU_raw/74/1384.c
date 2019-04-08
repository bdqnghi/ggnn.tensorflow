void main()
{
	int m,n,i,j,k=0,x;
	scanf("%d%d",&m,&n);
	if(m==2) 
	{
		k=1;
		printf("2");
	}
   if(m%2==0) m=m+1;
	for(i=m;i<=n;i+=2)
	{
		for(j=3;j<=sqrt(i);j=j+2)
		{
			if(i%j==0) break;
		}
		if(j>sqrt(i))
		{
			if(i<10) x=i;
			else if(i<100) x=i%10*10+i/10;
			else if(i<1000) x=i/100+i%100/10*10+i%10*100;
			else if(i<10000) x=i/1000+i%1000/100*10+i%100/10*100+i%10*1000;
			else  x=i/10000+i%10000/1000*10+i%1000/100*100+i%100/10*1000+i%10*10000;
			if(x==i)
			{
				if(k==0) printf("%d",i);
				else printf(",%d",i);
				k++;
			}
		}
	}
	if(k==0) printf("no\n");
}



