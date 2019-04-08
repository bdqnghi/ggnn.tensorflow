char b(char f);
int main(){
   char s[256];
   int i,j,n;
   scanf("%d",&n);
   for(j=0;j<n;j++) {
       scanf("%s",s);
       for(i=0;s[i];i++)
           s[i]=b(s[i]);
       printf("%s\n",s);
   }
return 0;
}
char b(char f){
   if(f=='A')return 'T';
   if(f=='T')return 'A'; 
   if(f=='C')return 'G'; 
   if(f=='G')return 'C'; 
} 