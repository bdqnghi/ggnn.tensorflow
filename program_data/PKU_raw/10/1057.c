int lanjie(int x,int p);
int max(int a,int b); 
int n,t=0,h[25],r[25][10000];
int main()
{
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&h[i]);
	printf("%d",lanjie(0,10000));
	return 0;
}
int lanjie(int x,int p)
{
	if(r[x][p])
	 return r[x][p];
	else if(x==n-1)
	 {if(h[x]<=p)
	   return r[x][p]=1;
	  else
	   return r[x][p]=0;
	 }
	else
	 {int f;
	  if(h[x]<=p)
	   {f=max(1+lanjie(x+1,h[x]),lanjie(x+1,p));}
	  else
	   f=lanjie(x+1,p);
	  return r[x][p]=f;
	 }
}
int max(int a,int b)
{
	return (a>b)?a:b;
}