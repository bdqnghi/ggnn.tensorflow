int su(int a);
int hui(int b);
int wei(int c);
void main()
{
   int m,n,i;
   int a[500];
   int k=0;
   scanf("%d %d",&m,&n);
	   for(i=m;i<=n;i++)
   {
     if(su(i)&&hui(i))
	 {
		a[k]=i;
		k=k+1;
	 }
   }
	   int j;
   if(k>0)
   {
	   printf("%d",a[0]);
	   for(j=1;j<k;j++) printf(",%d",a[j]);
   }
   else printf("no");
}

int wei(int c)
{
   if     (c/100000) return 6;
   else if(c/10000) return 5;
   else if(c/1000 ) return 4;
   else if(c/100 ) return 3;
   else if(c/10 ) return 2;
   else return 1;
	
}

int su(int a)
{
  int f;
  int flag=1;
  for(f=2;f<a/2;f++)
  {
	  if(a%f==0) {flag=0;break;}
  }
  if(flag) return 1;
  else return 0;
}

int hui(int b)
{
  int w,g;
  w=wei(b);
  int c[8];
  for(g=w-1;g>=0;g--)
  {
     c[g]=b%10;
	 b=b/10;
  }
  int fla=1;
  for(g=0;g<w;g++)
  {
    if(c[g]!=c[w-1-g]) fla=0;
  }
  if (fla==1) return 1;
  else return 0;
}