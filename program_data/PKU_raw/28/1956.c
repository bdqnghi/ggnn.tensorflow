int main(){
	char a[1000],b[100],mid;
	int i,num[1000]={0},j,l1,l2,judge,count;
	count=0;
	gets(a);
	l1=strlen(a);
	for(i=0;i<l1;i++){
		if(a[i]!=' '){
			num[count]++;
		}else if(a[i]==' '&&a[i+1]!=' '){
			count++;
		}
	}
	for(i=0;i<=count;i++){
		printf("%d",num[i]);
		if(i!=count){
			printf(",");
		}
	}
	return 0;
}