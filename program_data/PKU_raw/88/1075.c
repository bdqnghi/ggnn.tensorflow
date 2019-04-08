int main(){
	char s[31];
	int i,t=0;
	gets(s);
	for(i=0;s[i];i++){
		if(s[i]>='0'&&s[i]<='9'){
		  printf("%c",s[i]);
		  t=1;

		}else{
		  t=0;
		}
		if(t=1&&s[i+1]&&(s[i+1]<'0'||s[i+1]>'9')){
		  printf("\n");
		}

	}
   return 0;


}