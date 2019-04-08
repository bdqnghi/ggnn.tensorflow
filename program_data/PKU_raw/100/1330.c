
int main(){
	char s[300],i;
	int k=0,j,num;
	scanf("%s",s);
	for(i='a';i<='z';i++){
		num=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==i){
				num++;}
		}
		if(num!=0){
			printf("%c=%d\n",i,num);
			k++;
		}
	}
	if(k==0) printf("No");
}
