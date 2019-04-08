void main()
{
	unsigned int n,k=6,i=3,j=3,a,b,x,y;
	scanf("%d",&n);
	x=sqrt(i);
	y=sqrt(j);
	while(k<=n)
	{for(a=3;a<=sqrt(i);a+=2)
	if(i%a==0)break;
	j=k-i;
	for(b=3;b<=sqrt(j);b+=2)
	if(j%b==0)break;
	if(a>sqrt(i)&&b>sqrt(j)){printf("%d=%d+%d\n",k,i,j);k+=2;i=3;}
	else {i+=2;}
	}
	
}