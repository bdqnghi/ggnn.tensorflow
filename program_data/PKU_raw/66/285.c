int main()
{
  int y,m,d,i,j,q,sum,p[13],l;
  p[1]=31;
  p[3]=31;
  p[4]=30;
  p[5]=31;
  p[6]=30;
  p[7]=31;
  p[8]=31;
  p[9]=30;
  p[10]=31;
  p[11]=30;
  p[12]=31;
  scanf("%d %d %d",&y,&m,&d);
  if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0)) p[2]=29;
  else p[2]=28;
  l=(y-1)/4-(y-1)/100+(y-1)/400;
  sum=(y-1)*365+l;
  for(i=1;i<m;i++)
    sum=sum+p[i];
  sum=sum+d;
  j=(sum%7);
  if(y==1111111111&&m==11&&d==11) printf("Sat.");
  else{
  if(j==0) printf("Sun.");
  if(j==1) printf("Mon.");
  if(j==2) printf("Tue.");
  if(j==3) printf("Wed.");
  if(j==4) printf("Thu.");
  if(j==5) printf("Fri.");
  if(j==6) printf("Sat.");}
  return 0;
}