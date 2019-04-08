main()
{    int n;
     scanf("%d",&n);
     float*a=(float*)malloc((n+1)*sizeof(float));
     float*b=(float*)malloc((n+1)*sizeof(float)); 
     a[0]=b[0]=0;
     float length=0;
     for(int i=1;i<=n;i++)
    {scanf("%f %f",&a[i],&b[i]);}      
     for(int i=1;i<=n;i++)
     for(int j=i+1;j<=n;j++)
     {float temp=0;
      float temp1=a[i]-a[j];
      float temp2=b[i]-b[j];
      temp=sqrt(temp1*temp1+temp2*temp2);
      if(temp>length)
      length=temp;
     }
     printf("%.4f",length); 
     
      
      
  
}