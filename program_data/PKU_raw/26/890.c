
int main(){
	int i,j;
	char sr[101],sc[101];
	gets(sr);

	for(i=0,j=0;sr[i]!='\0';i++){
		if(sr[i]==' '&&sr[i+1]==' '){
			continue;
		}else{
			sc[j]=sr[i];
			j++;
		}
	}
	sc[j]='\0';

	puts(sc);


	
	return 0;

}