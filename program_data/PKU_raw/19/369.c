
int main(){
	char string[100][100];
	char str[1000];
	gets(str);
	int len=strlen(str);
	int i;
	int count=0;
	for(i=0;i<len+1;i++){
		if (str[i]==' '||(str[i]=='\0')){
			int k,q=0;
			for(k=i-1;k>=0;k--){
				if (str[k]==' ') break;
				
			}
			
			for(++k;k<=i;k++){
				string[count][q]=str[k];
				q++;
			}
			string[count][q-1]='\0';
			count++;
		}
	}
	char from[100];
	char to[100];
	gets(from);
	gets(to);
	char *nowword;
	int j=0;
	for(j=0;j<count;j++){
		nowword=string[j];
		if (strcmp(nowword,from)==0){
			strcpy(nowword,to);
		}
	}
	printf("%s",string[0]);
	for(i=1;i<count;i++) printf(" %s",string[i]);
	printf("\n");
	return 0;
}
