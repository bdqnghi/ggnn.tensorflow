struct stu
{
  char sex[7];
  float height;        
};
main()
{
    int n,i,j=0,k=0,m;
	scanf("%d",&n);
    float b[n],c[n],t;
    struct stu a[n];
    for(i=0;i<n;i++)
       scanf("%s %f",a[i].sex,&a[i].height);
    
    for(i=0;i<n;i++)
      {
        if(strcmp(a[i].sex,"male")==0)
          {
            b[j]=a[i].height;
            j++;
          }
        else if(strcmp(a[i].sex,"female")==0) 
          {
            c[k]=a[i].height;
            k++;
          }
      }
     
    for(i=0;i<j-1;i++)
      for(m=0;m<j-i-1;m++)
          if(b[m]>b[m+1])
            {  
              t=b[m];  
              b[m]=b[m+1];  
              b[m+1]=t; 
            }
    for(i=0;i<k-1;i++)
      for(m=0;m<k-i-1;m++)
          if(c[m]<c[m+1])
            {  
              t=c[m];  
              c[m]=c[m+1];  
              c[m+1]=t; 
            }
    
    printf("%.2f",b[0]);
    for(i=1;i<j;i++)
	  printf(" %.2f",b[i]);
    for(i=0;i<k;i++)
	  printf(" %.2f",c[i]);  
}