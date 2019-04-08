
int main(){
    int n,i,a,b,c,s=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d %d",&a,&b);
      if( (a>=90&&a<=140)&&(b>=60&&b<=90) ){
        t++;
        c=1;
      }
      else if(!( (a>=90&&a<=140)&&(b>=60&&b<=90) )){
        t=0;
      }
      if(t>s){s=t;}
    }
    printf("%d",s);

    return 0;
}
