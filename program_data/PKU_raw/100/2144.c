int main(){
    int i,t,m,s,n,len,e;
	char str1[300],str2[300];
	gets(str1);
	n=strlen(str1);
	for(i=0,t=0;i<n;i++){
		if(((str1[i]>='A')&&(str1[i]<='Z'))||((str1[i]>='a')&&(str1[i]<='z'))){
		   str2[t]=str1[i];
		   t++;
		}
	}
    len=t;
	if(len==0){
	  printf("No");
	}
	else{
	for(i=1;i<len;i++){
		for(t=0;t<len-i;t++){
			if(str2[t]>str2[t+1]){
			   e=str2[t+1];
			   str2[t+1]=str2[t];
			   str2[t]=e;
			}
		}
	}
	if(str2[0]!=str2[1]){
		   printf("%c=1\n",str2[0]);
		}
	for(s=0;s<len-1;s++){
		
	   if((s==0||(str2[s]!=str2[s-1]))&&(str2[s]==str2[s+1])){
		     m=s+1;
			 while(m!=len-1){
				 if(str2[m]!=str2[m+1]){
				   break;
				 }
				 m++;
			 }
            printf("%c=%d\n",str2[s],m-s+1);		
		}
       else if((s!=0)&&(str2[s]!=str2[s-1])&&(str2[s]!=str2[s+1])){
	        printf("%c=1\n",str2[s]);
	   }
	} 
	if((s=len-1)&&(str2[len-1]!=str2[len-2])){
		     printf("%c=1\n",str2[s]);
		}
    
	}
return 0;
}

