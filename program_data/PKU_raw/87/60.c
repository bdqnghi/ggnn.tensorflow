int miaoshu(int a,int b,int c,int d,int e,int f);
int main()
{
	int a,b,c,d,e,f;
	int i,ms;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		ms=miaoshu(a,b,c,d,e,f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
		printf("%d\n",ms);
	}
	scanf("%d",&ms);
	return 0;
}
int miaoshu(int a,int b,int c,int d,int e,int f){
	int ms1,ms2,ms;
	ms1=a*60*60+b*60+c;
	ms2=d*60*60+e*60+f;
	ms=43200-ms1+ms2;
	return ms;
}