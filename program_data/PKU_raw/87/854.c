int main()
{
	int a,b,c,d,e,f,i;
	for(i=0;i<10000;i++){
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;}		
		a=(12-a)*3600+d*3600;
		b=b*60+c;
		c=e*60+f;
		e=a+c-b;
		printf("%d\n", e);}
	return 0;
}