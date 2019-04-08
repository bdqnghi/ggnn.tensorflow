int main(){
	char m[100],z[100],t[100];
	gets(m);
	gets(z);
	gets(t);
	char fz[100][100]; //use this to seperate the words
	int len1=strlen(m);
	int i,k=0,j=0,num=1; //use "num" to calculate the number of the words
	for(i=0;i<len1;i++){
		if(m[i]!=32){
			fz[k][j]=m[i];
			j++;
		}
		else{
			num++;
			k++;
			j=0;
		}
	}
	for(k=0;k<num;k++){
		if(k!=num-1){
	        int result=strcmp(fz[k],z);
		    if(result==0){
			    strcpy(fz[k],t);
			    printf("%s ",fz[k]);
			}
		    else{
			    printf("%s ",fz[k]);
			}
		}
		if(k==num-1){
            int result=strcmp(fz[k],z);
		    if(result==0){
			    strcpy(fz[k],t);
			    printf("%s",fz[k]);
			}
		    else{
			    printf("%s",fz[k]);
			}
		}

	}
	return 0;
}




		

