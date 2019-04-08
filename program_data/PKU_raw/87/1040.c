
int main(){
    int a,b,c,d,e,f;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		d+=12;
		int start=a*3600+b*60+c,over=d*3600+e*60+f;
		int m=over-start;
		printf("%d\n",m);
	}
	return 0;
}
