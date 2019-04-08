int main()
{
	int a,b,c,d,e,f,h,m,s,sum;
	do{
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a+b+c+d+e+f!=0){
	h=d+12-a;
	m=e-b;
	s=f-c;
	sum=(h*60*60)+(m*60)+s;
	printf("%d\n",sum);
	}
	if(a+b+c+d+e+f==0){
		continue;
	}
	}
	while(a+b+c+d+e+f!=0);
	return 0;
}