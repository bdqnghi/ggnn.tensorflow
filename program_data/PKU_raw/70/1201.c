int main()                      //?????            
{ 
  double x[100],y[100];
  int n;
  cin>>n;
  double max=0;
  for(int i=0;i<n;i++)             //??????a?b?????
  {
       cin>>x[i]>>y[i];
       for(int j=0;j<i;j++)
       {
           double d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
           if(max<d)       
           max=d;
       
       }
  }
  printf("%.4f\n",max);                       //????
  return 0;                     //?????
}
