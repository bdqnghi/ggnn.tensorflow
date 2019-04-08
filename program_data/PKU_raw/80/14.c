int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,p,q,r,i,j,k,sum;
	scanf("%d%d%d\n%d%d%d",&a,&b,&c,&d,&e,&f);
	p=(d-a)*365;
	q=(b-1)*30+c;
	r=(e-1)*30+f;
	i=a;
	while (i<d)
	{
		if ((i%4==0&&i%100!=0)||(i%400==0))
		{
			p=p+1;
			i=i+1;
		}
		else
			i=i+1;
	}
	j=1;
	k=1;
	while (j<b)
	{ 
		if ((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
		{
			q=q+1;
			j=j+1;
		}
		else if (j==2)
		{
			q=q-2;
			j=j+1;
		}
		else
			j=j+1;
	}
	while (k<e)
	{ 
		if ((k==1)||(k==3)||(k==5)||(k==7)||(k==8)||(k==10)||(k==12))
		{
			r=r+1;
			k=k+1;
		}
		else if (k==2)
		{
			r=r-2;
			k=k+1;
		}
		else
			k=k+1;
	}
	if (((d%4==0&&d%100!=0)||(d%400==0))&&(e>2))
		r=r+1;
	else
		r=r+0;
	sum=p-q+r;
	printf("%d",sum);
	return 0;
}