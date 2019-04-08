int paixu(const void*a, const void*b)
{
    return(*(int*)b-*(int*)a);
}
int main()
{ 
    int n,i,j,money=0;  
    int s;
    for  (s=0;s<50;s++)
    {
     scanf ("%d",&n);
     if (n>0)
     {
      int a[n],b[n];
     for (i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    for (i=0;i<n;i++)
     {
        scanf("%d",&b[i]);
     }
    qsort(a,n, sizeof(a[0]),paixu);
    qsort(b,n, sizeof(b[0]),paixu);
    i=0;
    j=0;
    int x,y,t=0;
    x=n-1;
    y=n-1;
    while (t<n)
    {
     if (a[i]>b[j])
     {
       i++;
       j++;
       money+=200;
       t++;
     } 
   
    else if (a[x]>b[y])
    {
       x--;
       y--;
       money+=200;
       t++;
    }
  
    else if (a[x]==b[j])
    {
         x--;
         j++;
         t++;
    }
    else
    {
        money=money-200;
        x--;
        j++;
        t++;
    }
   }
    
    printf("%d\n",money);
    money=0;
   }
  }

  return 0;
} 


         
  
  
