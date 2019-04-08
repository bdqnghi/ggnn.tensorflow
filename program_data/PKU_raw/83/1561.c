void main()
{
  int n,i,m,a[10],b[10];
  float s,k,t;
  scanf("%d",&n);
  for (i=0;i<=n-1;i++)
	  scanf("%d",&a[i]);
  for (i=0;i<=n-1;i++)
	  scanf("%d",&b[i]);
  s=0;m=0;
  for (i=0;i<=n-1;i++)
  {  if (b[i]>=90) t=4.0;
     if ((b[i]>=85)&&(b[i]<=89)) t=3.7;
	 if ((b[i]>=82)&&(b[i]<=84)) t=3.3;
     if ((b[i]>=78)&&(b[i]<=81)) t=3.0;
     if ((b[i]>=75)&&(b[i]<=77)) t=2.7;
     if ((b[i]>=72)&&(b[i]<=74)) t=2.3;
     if ((b[i]>=68)&&(b[i]<=71)) t=2.0;
     if ((b[i]>=64)&&(b[i]<=67)) t=1.5;
     if ((b[i]>=60)&&(b[i]<=63)) t=1.0;
	 if (b[i]<60) t=0;
   s=s+t*a[i];
   m=m+a[i];
  } 
  k=s/m;
  printf("%.2f",k);
}