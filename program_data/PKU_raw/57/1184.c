  int main(){
   int n,i,len;
   char a[MAX+1];
   scanf("%d",&n);
   for(i=0;i<n;i++){
     scanf("%s",a);
    len=strlen(a);
    if(a[len-1]=='g'){
     a[len-3]='\0';
    }
     else {
      a[len-2]='\0';
     }
   printf("%s\n",a);
    }
   return 0;
}
    
