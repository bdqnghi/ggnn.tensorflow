int main()
{
   int n,i,j,a[1000],b[1000];
   double x,y,z;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);}
   x=(double)b[0]/a[0];
   for(i=1;i<n;i++){
     y=(double)b[i]/a[i];
     z=y-x;
     if(z>0.05){printf("better\n");}
     else if(z<-0.05){printf("worse\n");}
     else{printf("same\n");}
     z=0;}
    return 0;
}