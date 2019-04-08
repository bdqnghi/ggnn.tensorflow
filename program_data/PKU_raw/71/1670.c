int main()
{
  int a[13];
  a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
  a[2]=28;
  a[4]=a[6]=a[9]=a[11]=30;
  int n;
  int y,m1,m2;
  int i,j,x,k;
  scanf ("%d",&n);
  for (i=0;i<n;i++)
  {
    k=0;
    scanf ("%d %d %d",&y,&m1,&m2);
    if ((y%400==0)||(y%4==0&&y%100!=0))
      a[2]=29;
    else
      a[2]=28;
    if (m2<m1)
    {
      x=m2;
      m2=m1;
      m1=x;
    } 
    for (j=m1;j<m2;j++)
      k+=a[j];
    if (k%7==0)
      printf ("YES\n");
    else 
      printf ("NO\n");
}
}
        

