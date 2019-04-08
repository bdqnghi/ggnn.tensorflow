int main(){
	int n,i,j,a;
	char num[4];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		char yl[256];
		char bl[256];
		gets(yl);
		a=strlen(yl);
		for(j=0;j<a;j++){
			if(yl[j]==65){
				bl[j]='T';
			}else if(yl[j]==67){
				bl[j]='G';
			}else if(yl[j]==71){
				bl[j]='C';
			}else{
				bl[j]='A';
			}
			printf("%c",bl[j]);
		}
		printf("\n");
	}
	return 0;
}






	
