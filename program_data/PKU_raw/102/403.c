struct ren
{
     char a[10];
     float b;
};
void l(float *a,int n)
{
     float k;
     for(int i=0;i<n;i++)
     for(int j=i;j<n;j++)
     {
          if(a[j]<a[i])
          {
               k=a[i];
               a[i]=a[j];
               a[j]=k;
          }
     }
}
main()
{
     void l(float *a,int n);
     int n,p=0,q=0;
     struct ren m[40];
     float f[40],g[40];
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
          scanf("%s",m[i].a);
          scanf("%f",&m[i].b);
          if(strcmp(m[i].a,"male")==0)
          {
               f[p]=m[i].b;
               p++;
          }
          else
          {
               g[q]=m[i].b;
               q++;
          }
     }
     l(g,q);
     l(f,p);
     for(int i=0;i<p;i++) 
     {
             printf("%.2f",f[i]);
             printf(" ");
     }
     for(int i=q-1;i>=0;i--) 
     {
          printf("%.2f",g[i]);
          if(i!=0) printf(" ");
     }
}
