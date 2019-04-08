int main(){
   int n,p,q,t,m,i;
   char A[32],a[3]="er",b[3]="ly",c[4]="ing",e[3],d[4];
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%s",A);
       m=strlen(A);
       e[0]=A[m-2];
       e[1]=A[m-1];
       e[2]='\0';
       d[0]=A[m-3];
       d[1]=A[m-2];
       d[2]=A[m-1];
       d[3]='\0';
        p=strcmp(e,a);
        q=strcmp(e,b);
        t=strcmp(d,c);
       if(p==0||q==0){
            A[m-2]='\0';
            printf("%s\n",A);
       }
       else{
           if(t==0){
                A[m-3]='\0';
                printf("%s\n",A);
           }
           else{
           printf("%s\n",A);
           }
       }
   }
       return 0;

}
