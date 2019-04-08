int main()
{
	int reverse(int num);
	int i,p,q;
	for(i=1;i<=6;i++){
		scanf("%d",&p);
		q=reverse(p);
		printf("%d\n",q);
	}
	return 0;
}

int reverse(int num)
{
	int t,sign,b=0;
	t=abs(num);
	while(t>0){
		b=b*10+t%10;
		t/=10;
	}
	sign=(num>=0)?1:-1;
	b=sign*b;
	return b;
}