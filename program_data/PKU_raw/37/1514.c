int main(){
    int n,c;
    char a[100000],m[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%s",a);
            for(int j=0;j<strlen(a);j++){
                    c=1;
                    for(int k=0;k<strlen(a);k++){
                            if(a[k]==a[j]&&k!=j){
                              c=0;             
                              break;
                              }
                              }
                    if(c==1){
                      m[i]=a[j];
                      break;
                      }
            }
            if(c==0)
              m[i]='0';
    }
    for(int i=0;i<n;i++){
            if(m[i]=='0')
              printf("no\n");
            else
              printf("%c\n",m[i]);
              }
    return 0;
}