int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f),!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)){
		int end=f+e*60+d*3600;
		int begin=c+b*60+a*3600;
		int sec=end-begin;
		if(sec<0||sec<43200)sec=sec+43200;
		printf("%d\n",sec);
	}
	return 0;
}