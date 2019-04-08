int main(){
	  char zfc[102];
      char ip[2][50];	  

      gets(zfc);
      int len = strlen(zfc);
      int j=0,k=0,i;
	  for(i=0;i<len+1;i++){
        if (zfc[i]!=' '&&zfc[i]!='\0'){
           ip[j][k] = zfc[i];
           k++;
		}
	    else if (zfc[i]==' '|| zfc[i]=='\0'){
           ip[j][k] = '\0';
           j++;
           k=0;
		}
	  }	  
	  //printf("%s %s",ip[0],ip[1]);
	  int len1 = strlen(ip[1]),len2 = strlen(ip[0]);
      //printf("%d %d",len1,len2);
	  int w;
for(i=0,j=0;i<len1;i++){
        if (ip[1][i]==ip[0][j]){
			w=i;
			for(k=1;k<len2;k++){
				if(ip[1][i+k] != ip[0][j+k]){
					j=0;
                    w=0;
                    break;
				}
			}
			if (w=i)
				break;
		}
	}
   printf("%d",w); 

	 
	  return 0;
}

