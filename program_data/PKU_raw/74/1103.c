int lenth(int a)
{
	int n=0;
	while(a/10>0)
	{
		n=n+1;
		a=a/10;
	}
	return n;
}
int nixu(int a,int n)
{
	int z,m,i;
	if(a<10) z=a;
	else 
	{
      m=a%10;
	  for(i=1;i<=n;i++)
		  m=m*10;
	  z=m+nixu(a/10,n-1);
	}
	return z;
}
int huiwen(int a)
{
    int z,m;
	m=nixu(a,lenth(a));
	if(m==a) z=1;
	else z=0;
	return z;
}
int sushu(int a)
{
	int i,z;
	for(i=2;i<a;i++)
		if(a%i==0) {z=0;break;}
	if(i==a) z=1;
	return z;
}
void main()
{
	int a,b,i,s=0;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		for(i=b;i<=a;i++)
			if(huiwen(i)&&sushu(i)) {s=s+1;printf("%d",i);break;}

		for(i=i+1;i<=a;i++)
            if(huiwen(i)&&sushu(i)) {s=s+1;printf(",%d",i);}
		if(s==0) printf("no");
	}
	else
	{
		for(i=a;i<=b;i++)
			if(huiwen(i)&&sushu(i)) {s=s+1;printf("%d",i);break;}
		for(i=i+1;i<=b;i++)
            if(huiwen(i)&&sushu(i)) {s=s+1;printf(",%d",i);}
		if(s==0) printf("no");
	}
}