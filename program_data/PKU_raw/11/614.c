 int main()
 {
 int y,n,d,x=0,i=1,z;
   int m[13];
   m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
   m[4]=m[6]=m[9]=m[11]=30;
   m[2]=29;
   scanf("%d %d %d",&y,&n,&d);
 if(n==1)
 {
    x=d;
    z=x;
 }
 else
{
    if((y%400==0)||(y%4==0&&y%100!=0))
 {
  for(i=1;i<n;i++)
  {
   x=x+m[i];
   z=x+d;
  }
 }
   else
   {
   for(i=1;i<n;i++)
 {
   x=x+m[i];
   }
   z=x+d-1;
  }
 }
     
     printf("%d\n",z);
  return 0;
 }

