int main(){
    int n,i;
    scanf("%d",&n);
    char a[33];
    for(i=0;i<n;i++){
        scanf("%s",a);
      int l=strlen(a);
     if(a[l-1]=='r'||a[l-1]=='y'){
         a[l-2]=0;
     }
     else if(a[l-1]=='g'){
         a[l-3]=0;
     }
          printf("\n%s",a);
      }
    return 0;
}


