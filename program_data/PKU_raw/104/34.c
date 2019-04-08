int main()
{
	int i,a,b,temp,t1,t2;
	scanf("%d %d",&a,&b);
	if(a<b){temp=a;a=b;b=temp;}
	t1=(int)(log(a)/log(2));t2=(int)(log(b)/log(2));
	for(i=t1;i>t2;i--){a=a/2;}
	for(;a!=b;)
	{a=a/2;b=b/2;}
	printf("%d\n",a);
	return 0;
}