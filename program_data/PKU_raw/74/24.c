void main()
{
	int i,k,a,b,c=0,e=0,d,f=0,sum=0,j,rever;
	scanf("%d %d",&a,&b);	
	for(i=a;i<=b;i++)
	{
		sum=0;
		d=i;
		k=(int)sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0){c=0;break;}
			else c=1;
		}
		if(c==1)
		{
			do{
			sum=sum*10;
			rever=d%10;
			d=d/10;
			sum=sum+rever;
			}while(d!=0);
		}
		if(sum==i)
		{
			f++;
			e=1;
			if(f==1)
				printf("%d",i);
			else printf(",%d",i);}
	}if(e==0) printf("no");
}