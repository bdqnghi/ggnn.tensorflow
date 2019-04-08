int main()
{
    int i,s[100],m,n,r,j;
    struct{
           int a,b,c,d,e,f;
           }p[100];
    for(i=1;i<100;i++){
                  scanf("%d%d%d%d%d%d",&p[i].a,&p[i].b,&p[i].c,&p[i].d,&p[i].e,&p[i].f);
                  if(p[i].a==0 && p[i].b==0 && p[i].c==0 && p[i].d==0 && p[i].e==0 && p[i].f==0)
                     break;
                  }
    for(j=1;j<=i;j++){
                      if(p[j].a>=0 && p[j].a<=11 && p[j].d>=0 && p[j].d<=11 &&p[j].c>=0 && p[j].c<=59 && p[j].b>=0 && p[j].b<=59&& p[j].e>=0 && p[j].e<=59 && p[j].f>=0 && p[j].f<=59 ){
                      p[j].d=12+p[j].d;
                      m=(p[j].d-p[j].a)*3600;
                      s[j]=m;
                      if(p[j].e>=p[j].b){
                          n=(p[j].e-p[j].b)*60;
                          s[j]=s[j]+n;
                          }
                      if(p[j].e<p[j].b){
                          n=(p[j].b-p[j].e)*60;
                          s[j]=s[j]-n;
                          }    
                      if(p[j].f>=p[j].c){
                          r=p[j].f-p[j].c;
                          s[j]=s[j]+r;
                          }
                      if(p[j].f<p[j].c){
                          r=p[j].c-p[j].f;
                          s[j]=s[j]-r;
                          }    
                      }
                      if(p[j].a==0 && p[j].b==0 && p[j].c==0 && p[j].d==0 &&p[j].e==0 && p[j].f==0)
                        break;
                      }
    for(j=1;j<i-1;j++){
                      printf("%d\n",s[j]);
                      }
    printf("%d",s[i-1]); 
return 0;
}         