
char pure(int n,int a[],int topnum,int topcheck);

main ()
{
     int n,i,j;
     scanf("%d",&n);
     if (n<=4) printf("empty");
     else
     {
         int a[1300];
         int topnum,topcheck; 
         a[0]=3;
         topnum=0;topcheck=2;
         for (i=5;i<=n;i=i+2)
         {
             if (topcheck*topcheck<=i) topcheck++;
             if (pure(i,a,topnum,topcheck))
             {
                topnum++;
                a[topnum]=i;
                if (a[topnum]==a[topnum-1]+2)
                   printf("%d %d\n",a[topnum-1],a[topnum]);
             }
         }
     }
}

char pure(int n,int a[],int topnum,int topcheck)
{
     for (int i=0;i<=topnum;i++)
     {
         if (a[i]==topcheck) break;
         if (n%a[i]==0) return 0;
     }
     return 1;
}
