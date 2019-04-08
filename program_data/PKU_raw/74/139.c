void main()
{ 
  int f(int n);
  int h(int n);
  int n,m,d=0,i,k1,k2,num[100];
  scanf("%d  %d",&n,&m);
  for(i=n;i<=m;i++)
  {
   if(((k1=f(i))==1)&&(k2=h(i))==1)
   {
	 num[d]=i;d=d+1;
   }
  }
  if(d==0) printf("no\n");
  else if(d!=0)
  {
  for(i=0;i<d-1;i++)
	  printf("%d,",num[i]);
  printf("%d",num[d-1]);
  }
}

int f(int n)
{
 int k=sqrt(n),i;
 for(i=2;i<=k;i++)
 {
  if(n%i==0)
  {
	return(-1);
	break;
  }
 }
 if(i==(k+1))
	 return(1);
}

int h(int n)
{
 char c1[20],c2[20];
 int i,j,l;
 for(i=0;;i++)
 {
  if(n<10)
  {
   c1[i]=n%10+48;
   c1[i+1]=n/10+48;
   break;
  }
  else
  {
   c1[i]=n%10+48;
   n=n/10;
  }
 }
 j=i;
 for(i=0;i<=j;i++)
  c2[i]=c1[j-i];
 for(i=0;i<=j;i++)
 {
  if(c1[i]!=c2[i])
  {
   return(-1);
   break;
  }
 }
 if(i==j+1) return(1);
}
