void main()
{
	int reverse(int d);
	int prime(int num);
	int m,n,p,q,r,k=0;
	scanf("%d %d",&m,&n);
	for(r=m;r<=n;r++)
	{
		p=reverse(r);
		q=prime(r);
		if(p==r&&q==1)
		{
			k++;
		    if(k==1) printf("%d",r);
		    else printf(",%d",r);
		}
	}
	if(k==0) printf("no");
}
int reverse(int d)
{
	int c,k,i,sum,e;
	int b[10]={0};
	k=log10(d);
	for(i=k;i>=0;i--)
	{
		b[i]=d/pow(10,i);
		d=d-b[i]*pow(10,i);
	}
	for(i=0;i<=k;i++)
	{
		if(b[i]!=0)
		{
			e=i;
		    break;
		}
	}
	sum=b[k];
	for(i=k-1;i>=e;i--)
		sum=sum+b[i]*pow(10,k-i);
	return(sum);
}
int prime(int num)
{
	int k,i;
	k=sqrt(num);
	for(i=2;i<=k;i++)
		if(num%i==0)
			break;
	if(i>=k+1)
		return(1);
	else return(0);
}
