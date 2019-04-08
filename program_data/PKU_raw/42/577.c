void main()
{
 int a[200000],t=0,i,j,n,m,*p;
 scanf ("%d\n",&n);
 p=a;
 for (i=0;i<n;i++)
 { 
  scanf ("%d",p++);
 }
 scanf ("%d",&m);
 p=a;
 for (i=0,t=0;i<n;i++)
 {
  if (*(p+i)==m) continue;
  else {*(p+n+t)=*(p+i);t++;}
 }
 p=a;
 for (i=n;i<n+t-1;i++,p++)
 {
  printf ("%d ",*(p+n));
 }
 if (t!=0)
 printf ("%d",a[n+t-1]);
 }