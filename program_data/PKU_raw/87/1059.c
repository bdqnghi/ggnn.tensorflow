int main(){
	int a,b,c,d,e,f;
	int result;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		result=0;
		d=d+12;
		result=result+(d-a-1)*60*60+e*60+f+60*60-b*60-c;
		printf("%d\n",result);
	}
	return 0;
}
