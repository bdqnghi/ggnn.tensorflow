int main()
{
  int n,all[100],work[100];
  double c[100],m;
  int i=0;
  char x;
  scanf("%d",&n);
  for (i=0;i<n;i++){
	  scanf("%d%d",&all[i],&work[i]);
  }
  for (i=0;i<n;i++){
	  c[i]=1.0*work[i]/all[i];
  }
  for (i=1;i<n;i++){
	  m=c[i]-c[0];
  if (m>0.05) {
	  printf("better\n");
  }
  if (m<-0.05) {
	  printf("worse\n");
  }
  if (m<=0.05&&m>=-0.05){
	  printf("same\n");
  }
  }
  
  return 0;
}