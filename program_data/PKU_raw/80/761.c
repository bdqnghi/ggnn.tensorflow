int main()
{
  int sy,sm,sd,ey,em,ed,m[12],i,d1,d2,d3,d4,d;
  m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
  m[4]=m[6]=m[9]=m[11]=30;
  m[2]=28;
  scanf("%d %d %d %d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
  d1=d2=d4=0;
  for(i=1;i<sm;i++)
    d1=d1+m[i];
  for(i=1;i<em;i++)
    d2=d2+m[i];
  d3=((ey-sy)*365)+(d2+ed-d1-sd);
  for(i=sy;i<=ey;i++)
    if((i%4==0&&i%100!=0)||(i%400==0))
      d4=d4+1;
  if(((sy%4==0&&sy%100!=0)||(sy%400==0))&&(sm>2||sm==2&&sd==29))
    d4=d4-1;
  if(((ey%4==0&&ey%100!=0)||(ey%400==0))&&em<3)
    d4=d4-1;
  d=d3+d4;
  printf("%d",d);

    
}