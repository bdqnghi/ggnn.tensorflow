int main(){
	int i,k=0;
	int s[1000];
	for(i=0;1;i++){
		int a,b,c,d,e,f;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}else{
			s[i]=3600*(12-a)-b*60-c+3600*d+e*60+f;
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("%d\n",s[i]);
	}
	return 0;
}