int main()
{
  int i,n,k,s,max,min;
  int a[10000],b[10000];
  double c=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d%d",&a[i],&b[i]);
  }
   // for(i=1;i<=n;i++) printf("%d",a[i]);
  
  
  for(i=1,min=a[1];i<=n;i++)
  {
      if(a[i]<=min)
      {
          min=a[i];
      }
  }
  //printf("%d\n",min);
  max=b[1];
  for(i=1;i<=n;i++)
  {
      if(b[i]>max)
      {
          max=b[i];
      }
  }
  //printf("%d %d",min,max);
for(c=min+0.5;c<=max;c=c+1.0)
{
    for(k=1,s=0;k<=n;k++)
    {
        if(c>=a[k]&&c<=b[k])
           { s=0;break;}
        else {s=1;}
    }
    if(s==1) {
        printf("no\n");
        return 0;
        
    }
    
}
printf("%d %d",min,max);
return 0;
   
}

