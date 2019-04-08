main()
{
      int k,i,j,max;
      scanf("%d",&k);
      int height[k];
      int num[k];
      for(i=0;i<k;i++)
      scanf("%d",&height[i]);
      num[k-1]=1;
      max=1;
         for(i=k-2;i>=0;i--)
         {                  
                           num[i]=0; 
                            for(j=k-1;j>i;j--)
                            {
                                 if(height[i]>=height[j]&&num[i]<num[j])
                                 num[i]=num[j];             
                            }
                            num[i]=num[i]+1;
                            if(num[i]>max)
                            max=num[i];
         }
         printf("%d\n",max);
         getchar();
         getchar();
      
}
