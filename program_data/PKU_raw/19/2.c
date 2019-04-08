int main(){
 char c='0';
 char *s[100];
 char t[100],r[100];
 int i=0,j;
 while(c!='\n'){
                s[i]=(char*)malloc(sizeof(char)*100);
                scanf("%s",s[i++]);
                scanf("%c",&c);                
 }
 scanf("%s",t);
 scanf("%s",r);
 for(j=0;j<i;j++){
  if(strcmp(t,s[j])==0)
   s[j]=r;
  printf("%s",s[j]);  
  if(j<i-1)
   printf(" ");
 }
return 0;
}