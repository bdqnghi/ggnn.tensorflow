int main(){
	char zf[1000],zfc[100][100];
	int k=0,n=0,l,a,i;
	gets(zf);
	l=strlen(zf);
	for(i=0;i<l;i++){
		if(zf[i]!=' '){
			zfc[n][k]=zf[i];
			k++;
		}
		else{
			zfc[n][k]='\0';
			n++;
			k=0;
		}
	}
	zfc[n][k]='\0';
	for(i=0;i<n;i++){
		a=strlen(zfc[i]);
		if(a!=0){
            printf("%d,",a);
		}
	}
	printf("%d",strlen(zfc[n]));
	
}


