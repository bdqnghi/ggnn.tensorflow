
int reverse(int num){
	int sz[20];
	int i,fanxu=0,weishu=0;
	for(i=0;;i++){
		sz[i]=num%(int)pow(10,i+1);
		
		if(num%(int)pow(10,i+1)==0&&num/(int)pow(10,i+1)==0){
			weishu=i;
			break;
		}
		num=num-sz[i];
	}
	for(i;i>=0;i--){
		fanxu=fanxu+sz[i]*(int)pow(10,weishu-i-1)/(int)pow(10,i);
	}
	return fanxu;
}
int main(int argc, char* argv[])
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",reverse(a),reverse(b),reverse(c),reverse(d),reverse(e),reverse(f));
	return 0;
}