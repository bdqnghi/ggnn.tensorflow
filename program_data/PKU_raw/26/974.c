int main(){
	int i,n;
	char A[101];
	gets(A);
    for(i=0;A[i]!='\0';i++){
		if(A[i]!=' '){printf("%c",A[i]);}
		if(A[i]==' '){
		   for(n=i;A[n]==' ';n++){
			   i=n;    } 
			   printf(" "); 
		}
		} 
return 0;
}