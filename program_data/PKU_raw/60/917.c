int main()
{
  int n,a,b=0;
     scanf("%d",&n);
          for(int i=3;i<n-1;i++){
             for(int j=2;j<i;j++){
                if(i%j!=0&&(i+2)%j!=0){
                  a=1;
                  }
                else{a=0;break;}
             }
             if(a==1){
               printf("%d %d\n",i,i+2);
               b++;
             }
          }
          if(b==0){
                 printf("empty");}
return 0;
}