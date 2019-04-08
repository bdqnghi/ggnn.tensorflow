int main(){
    char z[1000];
	int i,j;
	gets(z);
	for(i=0;z[i];i++){
        if(z[i]==' '&&z[i+1]==' '){
			for(j=i;z[j];j++){
                z[j]=z[j+1];
			}
			i--;
		}
	}
	puts(z);
	return 0;
}

