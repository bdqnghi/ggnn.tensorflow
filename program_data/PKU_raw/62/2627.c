int main(){
	int i,j=0,num;
	int k=0;
	char str[1000];
	char re[1100];
	gets(str);
	while(str[j]!='\0'){
		j++;
	}
	num=j;
	for(i=0;i<num;i++){
		if(str[i]!=' '){
			re[k]=str[i];
			k++;
		}else{
			if(str[i+1]!=' '){
				re[k]=str[i];
				k++;
			}
		}
	}
	re[k]='\0';
	puts(re);
	return 0;
}