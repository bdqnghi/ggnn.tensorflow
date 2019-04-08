void main()
{ int n,i,p;

  double m,q,k=0.0;
  scanf("%d",&n);
  int num[300];
  for(i=0;i<n;i++) {scanf("%d",&num[i]);k=k+num[i];}
  
  m=k/n;
  int a,b;
  if(num[0]>num[1]){a=num[1];b=num[0];}
  else{a=num[1];b=num[0];}
  for(i=0;i<n;i++){if(num[i]<a) a=num[i]; if(num[i]>b) b=num[i];}
  if((m-a)>(b-m)) printf("%d",a);
if((m-a)==(b-m)) printf("%d,",a);
if((m-a)<=(b-m)) printf("%d",b);
}