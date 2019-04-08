int main(){
	int i,wz1[300],wz2[300],j=1,k=0;
	char str[1000];
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i]!=' '&&str[i-1]==' '){
			wz1[j]=i;
			j++;
		
		}
		if(str[i]!=' '&&str[i+1]==' '){
			wz2[k]=i;
			k++;
		
		}
}
	wz1[0]=0;
	wz2[k]=strlen(str)-1;

	for(i=0;i<j-1;i++){
	  printf("%d,",wz2[i]-wz1[i]+1);
	  
	}
	printf("%d",wz2[k]-wz1[j-1]+1);
	
	return 0;
}
