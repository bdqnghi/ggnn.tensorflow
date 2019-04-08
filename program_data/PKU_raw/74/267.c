void main()
{
	int prime_number(int i);
	int palindrome_number(int i);
	int m,n,a,b,i,flag;
	scanf("%d %d",&m,&n);
	for(i=m,flag=0;i<=n;i++)
	{
		a=prime_number(i);
		b=palindrome_number(i);
        if(a==1&&b==1)
		{
			flag++;
			if(flag==1) printf("%d",i);
			else printf(",%d",i);
		}
	}
	if(flag==0) printf("no\n");
}
	int prime_number(int i)
	{
		int j,k,z,p,l;
		z=0;
		k=sqrt(i);
		for(j=2,l=0;j<=k;j++)
		{
			p=i%j;
			if(p==0) l++;
		}
		if(l==0) z=1;
		return(z);
	}
	int palindrome_number(int i)
	{
		int a,b,c,d,e,h,z;
		z=0;
		if(i>0&&i<10) z=1;
		else if(i>=10&&i<100)
		{
			b=i/10;
			a=i-b*10;
			h=a*10+b;
			if(h==i) z=1;
		}
		else if(i>=100&&i<1000)
		{
			c=i/100;
			b=(i-c*100)/10;
			a=i-c*100-b*10;
			h=a*100+b*10+c;
			if(h==i) z=1;
		}
		else if(i>=1000&&i<10000)
		{
			d=i/1000;
			c=(i-d*1000)/100;
			b=(i-d*1000-c*100)/10;
			a=i-d*1000-c*100-b*10;
			h=a*1000+b*100+c*10+d;
			if(h==i) z=1;
		}
		else 
		{
			e=i/10000;
			d=(i-e*10000)/1000;
			c=(i-e*10000-d*1000)/100;
			b=(i-e*10000-d*1000-c*100)/10;
			a=i-e*10000-d*1000-c*100-b*10;
			h=a*10000+b*1000+c*100+d*10+e;
			if(h==i) z=1;
		}
		return(z);
	}





