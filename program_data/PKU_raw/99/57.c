void main()
{
 int a[100],b,c,d,i,j,k,n;
 double w=0,x=0,y=0,z=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(a[i]<19) w=w+1;
  if(a[i]>18&&a[i]<36) x=x+1;
  if(a[i]>35&&a[i]<61) y=y+1;
  if(a[i]>60) z=z+1;
 }
 w=w/n*100;
 x=x/n*100;
 y=y/n*100;
 z=z/n*100;
printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",w,x,y,z);
}