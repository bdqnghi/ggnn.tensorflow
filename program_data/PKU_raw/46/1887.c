int main()
  { int i,j,k,hang,lie,a[100][100],total,sum=0;//??????????total?????????total=hang*lie? 
       
    scanf("%d %d\n",&hang,&lie);
    total=hang*lie;
    for(i=0;i<=hang-1;i++)
    { for(j=0;j<=lie-1;j++)
      scanf("%d",&a[i][j]);}
    
    
    for(k=1;k<=10000;k++)
    { 
      for(j=k-1;j<=lie-k;j++)
      { printf("%d\n",a[k-1][j]);sum=sum+1;
        if(sum==total)goto end;}
        
      for(i=k;i<=hang-k;i++)
    { printf("%d\n",a[i][lie-k]);
       sum=sum+1;
        if(sum==total)goto end; }
      for(j=lie-k-1;j>=k-1;j--)
      
       { printf("%d\n",a[hang-k][j]);
       sum=sum+1;
        if(sum==total)goto end;}
        
      
      for(i=hang-k-1;i>=k;i--)

     { printf("%d\n",a[i][k-1]);
        sum=sum+1;
        if(sum==total)goto end;  }
       
        }
     end:; 
    return 0; 
     }