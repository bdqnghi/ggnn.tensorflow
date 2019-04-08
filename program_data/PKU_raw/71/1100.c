int main()
{
 struct
 {
    int y,m1,m2;
 }p[200];
 int n,i,j,t,day[13],sum=0;
 day[1]=31;day[3]=31;day[4]=30;day[5]=31;day[6]=30;day[7]=31;day[8]=31;day[9]=30;day[10]=31;day[11]=30;day[12]=31;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d%d%d",&p[i].y, &p[i].m1, &p[i].m2);

  if(p[i].y%4==0 && p[i].y%100!=0 ||p[i].y%400==0)
  day[2]=29;
  else day[2]=28;
  
  if(p[i].m1 > p[i].m2)
  {
     t=p[i].m1;
     p[i].m1=p[i].m2;
     p[i].m2=t;
  }
  for(j=p[i].m1;j<p[i].m2;j++)
  {
   sum+=day[j];
  }
  if(sum%7==0 ) printf("YES\n");
  else printf("NO\n");
  sum=0;
 }
  
 return 0;
}


