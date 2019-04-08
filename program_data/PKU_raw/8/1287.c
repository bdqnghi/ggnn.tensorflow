int input(int *s,int n)
{
    
}
int sort(int *s,int n)
{
    
}
main()
{
      //??m?n 
      int m,n;
      scanf("%d %d",&m,&n);
      
      //?????? 
      int *a=(int *)malloc(m*sizeof(int));
      int *b=(int *)malloc(n*sizeof(int));
      int *s=(int *)malloc((m+n)*sizeof(int));
      
      //?? 
      for (int i=0;i<m;i++)
      scanf("%d",a+i);
      for (int i=0;i<n;i++)
      scanf("%d",b+i);
      
      //?? 
      for (int i=1;i<m;i++)
      for (int j=0;j<m-i;j++)
      {
        if (*(a+j)>*(a+(j+1)))
        {
                        int t;
                        t=*(a+j);
                        *(a+j)=*(a+(j+1));
                        *(a+(j+1))=t;
        }
      }
      for (int i=1;i<n;i++)
      for (int j=0;j<n-i;j++)
      {
        if (*(b+j)>*(b+(j+1)))
        {
                        int t;
                        t=*(b+j);
                        *(b+j)=*(b+(j+1));
                        *(b+(j+1))=t;
        }
      }
      
      //?? 
      for (int i=0;i<m;i++)
      s[i]=a[i];
      for (int i=0;i<n;i++)
      s[m+i]=b[i];
      for (int i=0;i<m+n;i++)
      {
          if (i==0)
          printf("%d",s[i]);
          else
          printf(" %d",s[i]);
      }

} 