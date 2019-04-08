int main(){
	char zfc[101],dy[101]={0};
	gets(zfc);
	int l=strlen(zfc);
	int j=0,k;
	for(int i=0;i<l;i++){
		if(zfc[i]!=' '){
			dy[j]=zfc[i];
			j++;
		}else if(zfc[i]==' '){
			if(zfc[i+1]!=' '){
				dy[j]=' ';
				j++;
			}
		}
	}
	for(k=0;k<j;k++){
		printf("%c",dy[k]);
	}



	return 0;
}
