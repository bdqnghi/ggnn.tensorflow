main(){
 double a[50][2],dis,temp;
 int i,j,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)scanf("%lf %lf",&a[i][1],&a[i][2]);
 dis=0;
 for(i=1;i<n;i++)
  for(j=i+1;j<=n;j++){
   temp=sqrt(pow(a[i][1]-a[j][1],2)+pow(a[i][2]-a[j][2],2));
   if(temp>dis)dis=temp;
  }
 printf("%.4f\n",dis);  
 return 0;
}