int main()
{
    int n,m,i,j,a[1001],t,w,e;
    scanf("%d%d",&n,&m);
    t=0;
    for (i=0;i<=n-1;i++)
      scanf("%d",&a[i]);
      for (i=0;i<=n-1;i++)
        {
          for (j=i;j<=n-1;j++)
            if (a[i]+a[j]==m)
                {  t=1;  break;}            
          if (t==1) break;
        }
           if (t==1)  printf("yes");  else  printf("no"); 
         
           
return 0;      
}



