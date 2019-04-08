

main(){
       int n,a,b,i;
       scanf("%d",&n);
       if(n==1) printf("End\n");
       else{
            a=n;b=n;
           for(;;){
             if(a==1) break;
             if(a%2==0){
               b=a/2;
               printf("%d/2=%d\n",a,b);
               a=b;
             }
             else{
               b=a*3+1;
               printf("%d*3+1=%d\n",a,b);
               a=b;
             }
           }
           printf("End\n");
       }
}
