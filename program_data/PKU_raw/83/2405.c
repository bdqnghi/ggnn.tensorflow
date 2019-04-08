 int main()
 {
  float GPA,s=0;
  int i,n,m,o,t=0;
  scanf("%d",&n);
  int a[n],b[n];
  float c[n];
  for(m=1;m<=n;m++)
    {
       scanf("%d ",&a[m]);
    t=t+a[m];
    }
  for(i=1;i<=n;i++)
    {
      scanf("%d ",&b[i]);
      if(b[i]>=90&&b[i]<=100)
	   c[i]=4.0;
   if(b[i]>=85&&b[i]<=89)
	   c[i]=3.7;
   if(b[i]>=82&&b[i]<=84)
	   c[i]=3.3;
   if(b[i]>=78&&b[i]<=81)
	   c[i]=3.0;
   if(b[i]>=75&&b[i]<=77)
	   c[i]=2.7;
   if(b[i]>=72&&b[i]<=74)
	   c[i]=2.3;
   if(b[i]>=68&&b[i]<=71)
	   c[i]=2.0;
   if(b[i]>=64&&b[i]<=67)
	   c[i]=1.5;
   if(b[i]>=60&&b[i]<=63)
	   c[i]=1.0;
   if(b[i]<60)
	   c[i]=0;
     }
  for(o=1;o<=n;o++)
  {
  s=s+a[o]*c[o];
  }
  GPA=s/t;
  printf("%.2f",GPA);
  return 0;
 }