
const int dom[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int main(){
  long sy,sm,sd,ey,em,ed,ans;
  int i,flag;
  scanf("%d%d%d%d%d%d",&sy,&sm,&sd,&ey,&em,&ed);
  ans=365*(ey-sy+1);
  for (i=sy;i<=ey;i++)
    if (!(i%4)&&(i%100)||!(i%400)) ans++;
  if (sm>1){
    if (!(sy%4)&&(sy%100)||!(sy%400)) flag=1;
    else flag=0;
    for (i=1;i<sm;i++)
      ans-=dom[flag][i];
  }
  if (em<12){
    if (!(ey%4)&&(ey%100)||!(ey%400)) flag=1;
    else flag=0;
    for (i=em+1;i<=12;i++)
      ans-=dom[flag][i];
  }
  ans-=sd;
  if (!(ey%4)&&(ey%100)||!(ey%400)) flag=1;
  else flag=0;
  ans-=dom[flag][em]-ed;
  printf("%d",ans);
}
