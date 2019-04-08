int main(){
 char str[100],str1[50],str2[50],zfc[3][50];
    int i,j,yes,no=0,m,n;
    int len,len1,len2;
    gets(str);
    gets(str1);
    gets(str2);
    len=strlen(str);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len-len1+1;i++){yes=0;
                            for(j=0;j<len1;j++){
                                                if(str[i+j]==str1[j])
                                                yes++;
                                                }
                                                //printf("%d",yes);
                            if(yes==len1){
                            
                            m=i;
                            
   //printf("%d",m);
   n=0;
   for(i=0;i<m;i++){
                    zfc[0][n]=str[i];
                    n++;
                    }
                    zfc[0][m]='\0';
                    printf("%s",zfc[0]);
  strcpy(zfc[1],str2);
                         printf("%s",zfc[1]);
                         n=0;
  for(i=m+len1;i<len;i++){
                          zfc[2][n]=str[i];
                          n++;
                          }
                          zfc[2][len-m-len1]='\0';
                          printf("%s",zfc[2]);
 // printf("%s%s%s",zfc[0],zfc[1],zfc[2]);
   break;
   }
else{no++;}
}
if(no==len-len1+1){
     printf("%s",str);
     }
     return 0;
}