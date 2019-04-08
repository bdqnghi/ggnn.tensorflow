int main()
{
    int i,x,y;
    double a;
    char zfc1[501],zfc2[501];
    scanf("%lf",&a);
    scanf("%s",zfc1);
    scanf("%s",zfc2);
    x=strlen(zfc1);
    y=strlen(zfc2);
    int s=0;
    for(i=0;i<x;i++){
       if(zfc1[i]!='A'&&zfc1[i]!='G'&&zfc1[i]!='C'&&zfc1[i]!='T'){
          s=1;
          break;
          }
    } 
    for(i=0;i<y;i++){
       if(zfc2[i]!='A'&&zfc2[i]!='G'&&zfc2[i]!='C'&&zfc2[i]!='T'){
          s=1;
          break;
          }
    }
    if(x!=y||s==1){
             printf("error");
    }else{
          int t=0;
          for(i=0;i<x;i++){
              if(zfc1[i]==zfc2[i]){
                 t++;
              }
          }
          double s;
          s=1.0*t/(1.0*x);
          if(s>a){
                   printf("yes");
          }else{printf("no");
          }
    }
    return 0;
}