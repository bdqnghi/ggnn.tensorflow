int main()
{
	int check(int x);
	int a,b,num;
	scanf("%d",&num);
	for(a=2;a<=(num/2);a++)
	{
		b=num-a;
		if(check(b)&&check(a)) printf("%d %d\n",a,b);
	}
	return 0;
}
int check(int x){
	int i,k;
	k=sqrt(x);
	for(i=2;i<=k;i++)
	if(!(x%i)){
		x=0;break;}
	return x;
	}
	

