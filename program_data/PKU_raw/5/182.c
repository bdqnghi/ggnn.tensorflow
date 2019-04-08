int main(){
    char a[100],b[100],c[100],x,y;
    int i,j,k,m,n=0,z=0;
    double o,p;
    scanf("%lf",&p);
    gets(a);
    gets(b);
    gets(c);
    m=strlen(b);
    k=strlen(c);
    if(m!=k){
      printf("error");
      z=1;
      }
    if(z==0){
      for(i=0;i<m;i++){
        if((b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')||
           (c[i]!='A'&&c[i]!='T'&&c[i]!='G'&&c[i]!='C')){
           printf("error");
           z=1;
           break;
           }
        }
      }
    if(z==0){
      for(i=0;i<m;i++){
         if(b[i]==c[i])n++;
         }
      o=1.0*n/m;
      if(o>p)printf("yes");
      else{printf("no");}
      }
    scanf("%d",&j);
    return 0;
}
