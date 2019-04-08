int main(){
    char b[1000];

	int i,wz[300],x=0,d=0,word;


    gets(b);
	for(i=0;i<300;i++){
	    wz[i]=0;
	}
   
	for(i=0;i<strlen(b);i++){
	
		if(b[i]!=' '){
			
			wz[x]++;
					
		}
			
		else {
		    x++;
		}	
	}
	word=x;


	for(i=0;i<word;i++){
		if(wz[i]!=0){
			printf("%d,",wz[i]);}
		}
	printf("%d",wz[word]);
	
	return 0;
}

