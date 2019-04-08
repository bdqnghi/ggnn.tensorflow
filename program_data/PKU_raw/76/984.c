int main()
{
  int i,j,a,b,c[50000],n,m[50000],x,y;
  a=0;
  b=0;
  x=0;
  y=10000;
   scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%d ",&c[i]);
   scanf("%d",&m[i]);
  }
  for(i=0;i<n;i++)
  {
	  if(c[i]<=y){
     y=c[i];
	  }
	  if(m[i]>=x) {
		  x=m[i];
	  }
   }
  for(i=y;i<x;i++)
  { 
	  for(j=0;j<n;j++){
		  if(i+0.5>=c[j]&&i+0.5<=m[j]){
      break;
      }
	  }if(j==n) {
		  break;
	  }
  }
	  if(i==x)  {
		  printf("%d %d",y,x);
	  }
	  else {
		  printf("no");
	  }
return 0;
}