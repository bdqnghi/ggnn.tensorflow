
int main(){
       char a[20][100],b[20][100];
       char c[20][100];
       int i,len1,len2,d,n,cycle;
       scanf("%d\n",&n);
       for(cycle=0;cycle<n;cycle++)
       {
         gets(a[cycle]);
         gets(b[cycle]);
         scanf("\n");
         len1=strlen(a[cycle]);
         len2=strlen(b[cycle]);
         d=len1-len2;
       
       for(i=len1-1;i>=0;i--){
           if(i>=d){
           c[cycle][i]=a[cycle][i]-b[cycle][i-d]+48;
           if(a[cycle][i]<b[cycle][i-d]){ 
               a[cycle][i-1]=a[cycle][i-1]-1;
               c[cycle][i]+=10;}
           }else c[cycle][i]=a[cycle][i];
         }
       len2=0;d=0;i=0;len1=0;
       }
       int j;
       for(j=0;j<n;j++){
       
           printf("%s\n",c[j]);
       }
       
       
}
