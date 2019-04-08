int main(){
	int i,j=0;
	char zfc[100],guolv[100];
	gets(zfc);
	for(i=0;;i++){
		if(zfc[i]==0){
			guolv[j]=0;
			puts(guolv);
			break;
		}else if(zfc[i]==' '&&zfc[i+1]==' '){
           continue;
		}else{
           guolv[j]=zfc[i];
		   j++;
		}
	}
	return 0;
}