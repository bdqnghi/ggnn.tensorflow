int main()
{
	int a,b,c,d,e,f,g,h,time;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		g=3600*a+60*b+c;
		h=3600*(d+12)+60*e+f;
		time=h-g;
		printf("%d\n",time);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}


	