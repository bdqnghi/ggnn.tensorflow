
int main (int argc, char *argv[])
{
  int n,m,a,f,l,x,y,s;
  static int b[100];
  int i,j=0,k=0;
  scanf("%d",&n);
  m=n*n;
  for(i=0;i<m;i++)
  {
     scanf("%d",&a);
     if(a==0)
     {
        j+=1;
        b[k]=i+1;
        k+=1;
     }
  }
  f=b[0];
  for(k=1;k<100;k++)
  {
     x=b[k-1];
     y=b[k];
     if(x<y)
     {
        l=y;
     }
     else
     {
        break;
     }
  }
  if(l%n==0)
  {
     s=((l%n)-(f%n)+n+1)*((l/n)-(f/n))-j;
  }
  else
  {
     s=((l%n)-(f%n)+1)*((l/n)-(f/n)+1)-j;
  }
  printf("%d\n",s);
  return 0;
}
