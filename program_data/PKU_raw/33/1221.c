int main()
{
   int n,i,j;
   char s[300];
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%s",s);
      for(j=0;j<300;j++){
         if(s[j]=='\0'){
            printf("\n");
            break;
         }
         if(s[j]=='A'){
            printf("T");
         }
         if(s[j]=='T'){
            printf("A");
         }
         if(s[j]=='C'){
            printf("G");
         }
         if(s[j]=='G'){
            printf("C");
         }
      }
   }
   return 0;
}