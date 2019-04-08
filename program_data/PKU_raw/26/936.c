int main(){
	int i,j;
	char za[101];
	gets(za);
	
	for(i=1;za[i];){
		if(za[i]==' '&&za[i+1]==' '){
			for(j=i;za[j];j++){
				za[j]=za[j+1];
			}
		}else{
			i++;
		}
	}
	puts(za);
	return 0;
}