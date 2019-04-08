void bubble(int a[],int n)
{
     int pass,hold,j;
     for(pass=1;pass<=n-1;pass++)
     for(j=0;j<=n-2;j++)
     if(a[j]<a[j+1])
     {
              hold=a[j];
              a[j]=a[j+1];
              a[j+1]=hold;
     }
}   
int compare(const void*a1,const void*a2)
{
    int i;
    return (*(int*)a2-*(int*)a1);
} 
main()
{
      int I;
      for(I=1;;I++)
      {
          int *a,*b,i,n,as,ae,bs,be,money1=0,money2=0;
          
          scanf("%d",&n);
          if(n==0)
          break;
          else
          {
              a=(int*)malloc(n*sizeof(int));
              b=(int*)malloc(n*sizeof(int));
              for(i=0;i<=n-1;i++)
              scanf("%d",&a[i]);
              for(i=0;i<=n-1;i++)
              scanf("%d",&b[i]);
              bubble(a,n);
              qsort(b,n,sizeof(b[0]),compare);
              as=bs=0;
              ae=be=n-1;
              for(;as<=ae;)
              {
                           if(a[ae]>b[be])
                           {
                                 money1++;
                                 ae--;
                                 be--;
                           }
                           else if(a[ae]<b[be])
                           {
                                 money2++;
                                 ae--;
                                 bs++;
                           }
                           else if(a[as]>b[bs])
                           {
                                money1++;
                                as++;
                                bs++;
                           }
                           else if(a[as]<b[bs])
                           {
                                money2++;
                                ae--;
                                bs++;
                           }
                           else if(a[ae]<b[bs])
                           {
                                money2++;
                                ae--;
                                bs++;
                           }
                           else if(a[ae]>b[bs])
                           {
                                money1++;
                                ae--;
                                bs++;
                           }
                           else 
                           {
                                ae--;
                                as++;
                           }
              }
              printf("%d\n",200*(money1-money2));
          }
      }                      
}
                           
                                         
               
