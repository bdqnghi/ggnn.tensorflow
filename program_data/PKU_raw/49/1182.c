


int main() {
	char str[500]={'\0'},b[500]={'\0'};
	char a[500]={'\0'};
	int c,len,j,i,k,p;
	gets(a);
	c=strlen(a);
	for(len=2;len<=c;len++){
		//??? 
		for(k=0;k<=c-len;k++){
		//?str?? 
		     for(j=k,p=0;j<=len-1+k;j++,p++){
			     str[p]=a[j];
	 	        }
		//????b; 
		     for(i=0;i<len;i++){
		         b[i]=str[len-1-i];
	         }
	    //?????? 
	          if(strcmp(str,b)==0){
		         printf("%s\n",str);
	    }
	}
	
	    
		
	}
	
	
	
	return 0;
}