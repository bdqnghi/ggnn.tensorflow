int main(){
   char string[257],substring[257],replacement[257];
   gets(string);
   gets(substring);
   gets(replacement);
   int i,len1,len2,j,k,a=0;
   len1=strlen(string);
   len2=strlen(substring);
   for(i=0;i<len1;i++){
		if(string[i]==substring[0]){
			for(j=1;j<len2;j++){
				if(substring[j]==string[j+i])
					a+=1;
			    else
			        break;
			}
			if(a==len2-1){
				for(k=0;k<len2;k++)
					string[k+i]=replacement[k];
				break;
			}
		}
	}
	puts(string);
					
					
    
				return 0;
	
}


