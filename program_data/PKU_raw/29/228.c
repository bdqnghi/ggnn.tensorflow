int main()
{
    int n,i,j,a;
   
	int f2;
    float b;
  
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a);  
	   float sum=0.000;
       int f0=1;
       int f1=1;
       for(j=0;j<a;j++){
          f2=f1+f0;
          f0=f1;
          f1=f2;
          b=(float)f1/f0;
          sum+=b;
       }
	   printf("%.3f\n",sum);
    }
    return 0;
}