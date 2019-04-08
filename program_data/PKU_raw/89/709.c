int main()
{
    int n,i,j,k=0,x,y;
    int a[10000],b[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       a[i]=0;
       b[i]=0;
    }
     for(;;)
      {
         scanf("%d %d",&x,&y);
         a[x]+=1;
         b[y]+=1;
         if((x==0) && (y==0))
       break;
      }
      for(j=0;j<n;j++)
      {
          if((a[j]==0)&&(b[j]==n-1))
          {
              k=k+1;
              break;
          }            
      }
     if(k!=0)
     printf("%d",j);
     else
     printf("NOT FOUND");
    
           
        getchar ();
        getchar ();
        return 0;
}
