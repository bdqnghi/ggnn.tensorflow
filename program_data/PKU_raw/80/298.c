
int main()
{
	int a,b,c,x,y,z,sum=0,p,q,w,r,k;
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d%d%d",&x,&y,&z);
	r=y-1;
	p=x-1;
	//???
	if(a==x)
	{if(b==y)
	{sum=z-c;
	printf("%d",sum);}
	else
	{for(r=r;r>=b;r--)
	{	if((r%2==0)&&(r>7))
	sum=sum+31;
	else if((r%2==1)&&(r>7))
		sum=sum+30;
	else if((r%2==1)&&(r<8))
		sum=sum+31;
	else if(((r%2==0)&&(r<8))&&(r!=2))
		sum=sum+30;
	else if((r==2)&&((x%4==0&&x%100!=0)||(x%400==0)))
		sum=sum+29;
	else if((r==2)&&(x%4!=0||(x%100==0&&x%400!=0)))//??
		sum=sum+28;
	sum=sum-c+z;
	printf("%d",sum);

	}}}
	//???
	else
	{
		k=a+1;
		for(k=k;k<=p;k++)//??
	{if((k%4==0&&k%100!=0)||(k%400==0))
	   sum=sum+366;
	else sum=sum+365;
	};
	
	for(q=12;q>=b;q--)
	{
		if((q%2==0)&&(q>7))
	sum=sum+31;
	else if((q%2==1)&&(q>7))
		sum=sum+30;
	else if((q%2==1)&&(q<8))
		sum=sum+31;
	else if(((q%2==0)&&(q<8))&&(q!=2))
		sum=sum+30;
	else if((q==2)&&((a%4==0&&a%100!=0)||(a%400==0)))
		sum=sum+29;
	else if((q==2)&&(a%4!=0||(a%100==0&&a%400!=0)))//??
		sum=sum+28;
	}
	sum=sum-c;//????
	for(w=1;w<y;w++)
	{
	if((w%2==0)&&(w>7))
	sum=sum+31;
	else if((w%2==1)&&(w>7))
		sum=sum+30;
	else if((w%2==1)&&(w<8))
		sum=sum+31;
	else if(((w%2==0)&&(w<8))&&(w!=2))
		sum=sum+30;
	else if((w==2)&&((x%4==0&&x%100!=0)||(x%400==0)))
		sum=sum+29;
	else if((w==2)&&(x%4!=0||(x%100==0&&x%400!=0)))//??
		sum=sum+28;
	}
	sum=sum+z;
	printf("%d",sum);}
	return 0;
}


