void sort(float*p,int n)
{
   float temp;
   for (int i=0;i<n;i++)
      for (int j=n-1;j>i;j--)
        {
           if (*(p+j)<*(p+j-1))
              {
                 temp=*(p+j);
                 *(p+j)=*(p+j-1);
                 *(p+j-1)=temp;          
              }    
        }  
}
main()
{
  void sort(float*p,int n);
  float height[40];
  char gender[40][6];
  int n,lens[40];
  scanf ("%d",&n);
  for (int i=0;i<n;i++)
      {
        scanf ("%s%f",&gender[i],&height[i]);   
        lens[i]=strlen(gender[i]);
      }
  int p=-1,q=-1;
  float m[40],f[40];
  for (int j=0;j<n;j++)
     {
       if (lens[j]==4)
           {
             p++;
             m[p]=height[j];
           }
       else
           {
              q++;
              f[q]=height[j];
           }    
     }
  float *p1=m,*p2=f;
  sort(p1,p+1);
  sort(p2,q+1);
  for (int k=0;k<=p;k++)
      printf ("%3.2f ",m[k]);
  for (int k=q;k>=0;k--)
     {
           printf ("%3.2f",f[k]);
           if (k>0)
              printf (" ");
     }          
}