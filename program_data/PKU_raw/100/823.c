int main(){
	char a[100];
	int num[130]={0};
	scanf("%s",a);
	int i,j,c=0;
	for(i=0;i<strlen(a);i++){
		for(j='a';j<='z';j++){
			if(a[i]==j){
				num[j]++;
				c++;
			}
		}
	}
	if(c==0)
		printf("No");
	else{
	for(i=97;i<=122;i++){
		if(num[i]!=0){
			printf("%c=%d\n",(char)i,num[i]);
		}
	}}
}