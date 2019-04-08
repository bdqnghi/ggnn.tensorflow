int main(){
	char zx[100];
	
	int len;
	gets(zx);
	len=strlen(zx);
	char sj[100];
	int i=0;
	int j=0;
	while(i<len){
		if(zx[i]!=' '){
			sj[j]=zx[i];
			j++;
			i++;
		}else if(zx[i]==' '&&zx[i+1]!=' '){
			sj[j]=zx[i];
			i++;
			j++;
		}else if(zx[i]==' '&&zx[i+1]==' '){
			i++;
		}
	}
	sj[j]='\0';
	puts(sj);
	return 0;
}