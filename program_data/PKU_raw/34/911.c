int main()
{
  int n,i,j;
   int s[1000];
   scanf("%d",&n);
   for(i=0;;i++){
       s[0]=n;
if(s[i]>1){
       if(s[i]%2==0){
          s[i+1]=s[i]/2;
          printf("%d/2=%d\n",s[i],s[i+1]);
       }else{
           s[i+1]=3*s[i]+1;
           printf("%d*3+1=%d\n",s[i],s[i+1]);
       }
}else{
printf("End");
break;
}
   }
     return 0;
}