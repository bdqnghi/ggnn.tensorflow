
int main ()
{
int x[1000],y[1000],i,j,a,b,m,n,p=0;
 scanf ("%d %d",&a,&b);
 x[0]=a;y[0]=b;
if (a==1||b==1)
{
  printf("1");
}
else if (a==b)
{ 
	printf("%d",a);

} 

else{
for (i=1;a>0;i++)
{
  if (a%2==0)
  {
    x[i]=(a/2);
    a=a/2;
   }
  if (a%2!=0&&a!=1)
  {
    x[i]=(a-1)/2;
	a=x[i];
  }
if (a==1)
	 { x[i]=1;  a-=1; }
  m=i;
}

for (j=1;b>0;j++)
{
  if (b%2==0)
  {
    y[j]=(b/2);
    b=b/2;
   }
  if (b%2!=0&&b!=1)
  {
    y[j]=(b-1)/2;
	b=y[j];
  }
 if (b==1)
 {
   y[j]=b;
   b-=1;
 }
  n=j;
}




  for (i=0;i<=m;i++)
  {
   for (j=0;j<=n;j++)
   {
     if (x[i]==y[j])
	 {
	    printf("%d",x[i]);
        p=1;
	 }
    if (p==1)
		break;
   }
   if (p==1)
	   break;
  }
}

return 0;
}






