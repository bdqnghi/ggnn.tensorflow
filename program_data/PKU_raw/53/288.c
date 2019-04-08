int main()
{
   int a[300],b[300]={0};
   int i, j, n;

   scanf ("%d",&n);

   for (i=0;i<n;i++)
   scanf ("%d",&a[i]);

   for (i=0;i<n;i++)
   {
    for (j=0;j<i;j++)
     if (a[i]==a[j])
      {
       b[i]=1;
       continue;
       }
       }


     {
      int flag=0;
      for (i=0;i<n;i++)
      {
      if(b[i]==0&&flag==0)
      {
       flag=1;
       printf ("%d",a[i]);
       continue;
       }

       if(b[i]==0&&flag==1)
       printf (",%d",a[i]);
      }
      }

      }

