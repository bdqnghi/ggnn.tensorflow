int main(){
	char str[101];
	int i,p,n=0,j,end=0,duoyu=0;
	gets(str);
	p=strlen(str)+1;
	for(i=0;i<p;i++){
		if(str[i]==' '&&str[i+1]==' '){
			end++;
		}
	}
	for(i=0;i<p;i++){
		if(str[i]==' '&&str[i+1]==' '){
			duoyu++;
		}
		else if(str[i+1]!=' '){
			for(j=i;j<p;j++){
				str[j+1-duoyu]=str[j+1];
			}
			//printf("%s\n",str);
			//printf("%d\n",duoyu);
			i=i-duoyu;
			duoyu=0;
		}
	}
	//str[p-end]='\0';
	printf("%s",str);
	return 0;
}