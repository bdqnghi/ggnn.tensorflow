int f(int a,int s)
{
   int y=0;
   for (;s<=a;s++)
     {
       if (s==a)
          y+=1;
       else if (s>1&&a%s==0)
          y+=f(a/s,s);
     }
   return y;    
}
main ()
{
     int n,i,a;
     scanf ("%d",&n);
     for (i=0;i<n;i++)
       {
          scanf ("%d",&a);
          printf ("%d\n",f(a,1));
       }
}