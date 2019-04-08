int miao(int x,int y,int z);
int main(){
	int a,b,c,d,e,f,s;
	s = 0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	scanf("\n");
	while((a>=1) && (b>=0) && (c>=0) && (e>=0) && (f>=0) && (d>=1)){
		s = miao(d+12,e,f) - miao(a,b,c);
		printf("%d\n",s);
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		scanf("\n");
	}
	return 0;
}

int miao(int x,int y,int z){
	int m;
	m = (3600 * x) + (60 * y) + z;
	return m;
}