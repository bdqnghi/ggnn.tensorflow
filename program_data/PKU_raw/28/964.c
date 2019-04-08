int main(){
	char zifuchuan[N];
	int i,a=0;
	gets(zifuchuan);
	int n=strlen(zifuchuan);
	for(i=0;i<n;i++){
		if(zifuchuan[i]!=' '){
			a++;
		}else{
			if(a==0)continue;
			printf("%d,",a);
			a=0;
		}
	}	printf("%d",a);
	return 0;
}
