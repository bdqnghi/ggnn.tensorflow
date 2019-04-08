int main()
{
    int c,d,e,f,n,i;
    char a[100][10];
    int b[100];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%s %d",a[i],&b[i]);
    }
    for (c=0;c<n;c++)
    {       
      e=-1;
      for (i=0;i<n;i++)
      {
         if (b[i]>=60)
         {
           if (b[i]>e)
           {
             e=b[i];
             f=i;
           }
         }
      }
         if(e!=-1)
         {
           printf ("%s\n",a[f]);
           b[f]=0;
         }
    }
    for (i=0;i<n;i++)
    {
        if (b[i]!=0)
       {
           printf ("%s\n",a[i]);
       }
    }
    getchar();
    getchar();
}




