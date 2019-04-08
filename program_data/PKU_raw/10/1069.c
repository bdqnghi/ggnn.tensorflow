main()
{
      int k;
      int j=0;
      int max=0;
      int i,m;
      scanf("%d",&k);
      int height[k],b[k];
      while(j<k){
                 scanf("%d",&height[j]);
                 j++;
                 }
      j=j-1;
      while(j>=0){
                  for(i=j+1;i<k;i++){
                                     if(height[i]<=height[j]&&b[i]>max) 
                                        max=b[i];
                                     }
                  b[j]=max+1;
                  max=0;
                  j--;
                  }
      for(i=0;i<k;i++){
                       if(b[i]>max) 
                          max=b[i];
                       }
      printf("%d",max);
}
