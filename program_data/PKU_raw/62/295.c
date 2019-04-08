int main(){
 char str[200];
 int n,i,j,k;
 gets(str);
 for(i=0;str[i]!='\0';i++){
     if(str[i]==' '&&str[i+1]==' '){
		 k=i+1;
		 while(str[k]==' ') {
		    k++;
		 }
		 for(j=i+1;str[j]!='\0';j++){
		     str[j]=str[j+k-i-1];
		 }
	 }
 }
 printf("%s",str);
return 0;
}