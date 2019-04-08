int main () {
    double ns[40],vs[40];
    char  xsz[45][10];
    int n,a,b,f,g;
    double c;
    f=0;
    g=0;
    scanf("%d",&n);
    for(a=0;a<n;a++){
          scanf("%s",xsz[a]);
          if(xsz[a][0]=='m'){
               scanf("%lf",&ns[f]);
               f++;
          }
          else{
                scanf("%lf",&vs[g]);
                g++;
          }
    }
    for(a=1;a<=f;a++){
         for(b=0;b<f-a;b++){
               if(ns[b]>ns[b+1]){
                     c=ns[b];
                     ns[b]=ns[b+1];
                     ns[b+1]=c;
               }
          }
     }
      for(a=1;a<=g;a++){
         for(b=0;b<g-a;b++){
               if(vs[b+1]>vs[b]){
                     c=vs[b];
                     vs[b]=vs[b+1];
                     vs[b+1]=c;
               }
          }
     }
     for(a=0;a<f;a++){
       
             printf("%.2lf ",ns[a]);
     }
     for(a=0;a<g-1;a++){
         printf("%.2lf ",vs[a]);
     }
     printf("%.2lf",vs[a]);
     return 0;
 }

     
                      