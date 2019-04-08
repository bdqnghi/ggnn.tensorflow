int main(){
	char l[102];
	int j,i,k;
	gets(l);
	for(k=0;k<100;k++){
	for(i=0;i<100;i++){
		if(l[i]==' '&&l[i+1]==' '){
			for(j=i;j<100;j++){
				l[j]=l[j+1];
			}
		}
	}
	}



	puts(l);
			
	return 0;
}