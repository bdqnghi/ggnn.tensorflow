int main()
{
 char string[257];
 char substring[257];
 char replacement[257];
 int h,i,j,k,l1,l2,l3,temp,r=0,flag=0;
 scanf("%s",string);
 scanf("%s",substring);
 scanf("%s",replacement);
 l1=strlen(string);
 l2=strlen(substring);
 l3=strlen(replacement);
 for(i=0;i<l1;i++){
       if(string[i]==substring[0]){
        temp=i;
        r=0;
            for(j=0;j<l2;j++){
                 if(string[temp+j]==substring[j]){
                  r=r+1;
                 }
            }
            if(r==l2){

                 for(h=0;h<temp;h++){
                  printf("%c",string[h]);
                 }
                 for(j=0;j<l3;j++){
                  printf("%c",replacement[j]);
                 }
                 for(k=temp+l2;k<l1;k++){
                  printf("%c",string[k]);
                 }

                return 0;
            }
       }

  }
     
  printf("%s",string);
  return 0;
    
}
