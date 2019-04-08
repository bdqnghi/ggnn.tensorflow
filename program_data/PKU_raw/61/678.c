int main()
{  int n,x[100],a[100],z[100];
    scanf("%d",&n);
 x[0]=1;x[1]=1;
  for(int i=2;i<20;i++){x[i]=x[i-1]+x[i-2];}
  
  for(int j=0;j<n;j++){
  scanf("%d",&a[j]);
  z[j]=x[a[j]-1];
}
  for(int t=0;t<n;t++){
  printf("%d\n",z[t]); 
  }
return 0;
}

   