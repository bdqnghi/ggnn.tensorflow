int main(){
   int n,i,j=0;
   char a[5000]; 
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++){
       if(a[i]!=' '){
           j++;
           if(i==n-1){printf("%d",j);}
       }
       else if(j!=0){
           printf("%d,",j);
           j=0;
       }
   }
return 0;
}