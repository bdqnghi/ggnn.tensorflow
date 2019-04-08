int main()
{ 
 int n,i,j=0,k,t,s1[5000],s2[5000],s3[5000]={0},m=0;

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
  scanf("%d%d",&s1[i],&s2[i]);
  }

      int max=s2[0],min=s1[0];

  for(i=1;i<n;i++)
  {
   if(s1[i]<min)min=s1[i];

    if(s2[i]>max)max=s2[i];
  }
  for(i=n-1;i>=0;i--) 
  {
 for(k=0;k<i;k++)
 {
 if(s1[k]>s1[k+1])

 {
 t=s1[k];

 s1[k]=s1[k+1];

 s1[k+1]=t;

 t=s2[k];

 s2[k]=s2[k+1];

 s2[k+1]=t;
 }
 }
  }

    
   t=0;
     for(i=0;i<n-1;i++)
   {
   
   if(s2[i]+1==s1[i+1])
   {
   t=1;

   break;
   }
   }
   


      for(i=0;i<n;i++)
   {
   for(k=s1[i];k<=s2[i];k++)
   {
   s3[k]=1;

      
   }
   }
      for(i=0;i<=max;i++)
   {
   if(s3[i]==1)m++;
   }

 if(m==max-min+1&&t!=1)printf("%d %d",min,max);

 else printf("no");


   return 0;
}

