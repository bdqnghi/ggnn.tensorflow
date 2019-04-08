void main()
{int n,i,s=0;
 float GPA,t=0;
 float c[3][9];
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 {scanf("%f",&c[1][i]);
  s=s+c[1][i];}
 for(i=0;i<=n-1;i++)
 {scanf("%f",&c[2][i]);
  if(c[2][i]<60)
   c[0][i]=0;
  else if(c[2][i]<=63)
   c[0][i]=1.0;
  else if(c[2][i]<=67)
   c[0][i]=1.5;
  else if(c[2][i]<=71)
   c[0][i]=2.0;
  else if(c[2][i]<=74)
   c[0][i]=2.3;
  else if(c[2][i]<=77)
   c[0][i]=2.7;
  else if(c[2][i]<=81)
   c[0][i]=3;
  else if(c[2][i]<=84)
   c[0][i]=3.3;
  else if(c[2][i]<=89)
   c[0][i]=3.7;
  else c[0][i]=4.0;
  t=t+c[1][i]*c[0][i];}
  GPA=t/s;
 printf("%.2f",GPA);
}