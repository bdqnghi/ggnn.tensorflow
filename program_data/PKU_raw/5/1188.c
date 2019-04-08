int main()
{
   double a,f;   
   int d,e,k,i;
   char b[505];
   char c[505];
   k=0;
   scanf("%lf",&a);
   scanf("%s",b);
   scanf("%s",c);
   d=strlen(b);
   e=strlen(c);
   if(d!=e){
      printf("error");
   }else{
      for(i=0;i<d;i++){
          if(((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G'))||((c[i]!='A')&&(c[i]!='T')&&(c[i]!='C')&&(c[i]!='G'))){
             printf("error");
             k=1;
             break;
          }
       }
       if(k==0){
          for(i=0;i<d;i++){
              if(b[i]==c[i]){
                 k++;
              }
          }
          f=k/(d*1.0);
          if(f>a){
             printf("yes");
          }else{
             printf("no");
          }
        }
   }
   return 0;
}     

