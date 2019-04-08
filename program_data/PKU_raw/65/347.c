int main()
{
  int a[210],b[210];
  int n,sum=0,i;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
        scanf("%d %d\n",&a[i],&b[i]);  
        if(a[i]==b[i])
           continue;  
        if((a[i]==0)&&(b[i]==1))
        sum++;
         if((a[i]==1)&&(b[i]==2))
        sum++;
        if((a[i]==2)&&(b[i]==0))
        sum++;
        if((a[i]==1)&&(b[i]==0))
        sum--;  
        if((a[i]==2)&&(b[i]==1))
        sum--;     
        if((a[i]==0)&&(b[i]==2))
        sum--; 
     }
     if(sum>0)
     printf("A\n");
     if(sum==0)
     printf("Tie\n");
     if(sum<0)
     printf("B\n");
}