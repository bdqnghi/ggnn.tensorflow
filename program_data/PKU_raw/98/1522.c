main()
{
      int n;
      scanf ("%d",&n);
      int i,j;
      char a[2000][50];
      int length[2000]={0};
      for (i=0;i<n-1;i++)
      {
          scanf ("%s ",a[i]);
          length[i]=strlen(a[i]);
      }
      scanf ("%s",a[n-1]);
      length[n-1]=strlen(a[n-1]);
      //int ed=0;
      int total=80;
      for (i=0;i<n;i++)
      {
          if (length[i]<total) 
          {
            if (i==n-1) printf ("%s\n",a[i]);
            else
            { 
              if (length[i]+length[i+1]+1<=total)
              {  
                   printf ("%s ",a[i]); 
                   total=total-length[i]-1; 
              }
              else if (length[i]+length[i+1]+1>total)
              {
                   printf ("%s\n",a[i]);
                   total=80;
              }
            }
          }
          else if (length[i]==total) { printf ("%s\n",a[i]); total=80; }
          else if (length[i]>total) { printf ("\n"); i=i-1; total=80; }
      }
      //printf ("\n");
}