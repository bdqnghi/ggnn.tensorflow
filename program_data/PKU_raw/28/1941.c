int main(){
    char a[1000];
    gets(a);
    int f;
    int b;
    int d=0;
    //int f=1;
    int c[300];
    int e[300];
    f=strlen(a);
    for(int i=0;i<=f-1;i++){
            if(a[i]==' '&&a[i+1]==' '){
                      for(int j=i+1;j<=f-2;j++){
                              a[j]=a[j+1];
                              }
                              f--;
                              i--;}
                              
                              }
  //  printf("%s",a);
     b=f;
    for(int i=0;i<=b-1;i++){
           if(a[i]==' '){
                      c[d]=i;
                      d++;} }
    d--;
    if(d<0){
            printf("%d",f);}
    else{e[0]=c[0];
    for(int i=1;i<=d;i++){
            e[i]=c[i]-c[i-1]-1;
            }
    e[d+1]=b-c[d]-1;
    for(int i=0;i<=d;i++){
            printf("%d,",e[i]);}
    printf("%d",e[d+1]);}
    int y;
    scanf("%d",&y);
    return 0;}
