main ()
{
     int n,i,c,f,g=0;
     scanf ("%d",&n);
     int a[n];
     for (i=0;i<n;i++)
     a[i]=i;
     while (10)
     {
       scanf ("%d %d",&c,&f);
       if (c==0&&f==0)
       break;
       else 
       a[c]=-1;
       }
       for (i=0;i<n;i++)
       {
           if (a[i]!=-1)
          {
            printf ("%d\n",a[i]);
           g++;
           }
       }
       if (g==0)
       printf ("NOT FOUND");
       getchar ();
       getchar ();
     }
