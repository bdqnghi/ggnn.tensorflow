int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n-a*10000-b*1000-c*100-d*10;
	int f[5]={e,d,c,b,a},i;
	for(i=0;i<5;i++){
		if(f[i]!=0)
			printf("%d",f[i]);}
	return 0;
}
