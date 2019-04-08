int main(int argc, char* argv[])
{ int n;
scanf("%d",&n);
 int sz[1000];
 double l[1000];
 double a=2.0000;
 double b=1.0000;
  int i,j;
  double c;
  for(i=0;i<n;i++){
	  scanf("%d",&sz[i]);
	  l[i]=0;
  
  }
  for(i=0;i<n;i++){
  a=2.0000;
  b=1.0000;
  for(j=0;j<sz[i];j++){
  l[i]+=a/b;
   c=a;a=a+b;b=c;
  
  }
  printf("%.3lf\n",l[i]);}
  return 0;
  
  }
