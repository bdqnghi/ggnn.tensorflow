
char pure(int n,int a[],int topnum,int topcheck);

main ()
{
     int n,i,j,empty;
     empty=1;
     scanf("%d",&n);
     
     int a[500];
     int top,topnum,topcheck;  
     top=(int)sqrt(n);
     a[0]=3;
     topnum=0;
     for (i=5;i<=top;i=i+2)
     {
         if (topcheck*topcheck<=i) topcheck++;
         if (pure(i,a,topnum,topcheck))
         {
            topnum++;
            a[topnum]=i;
         }
     }
     
     topcheck=2;
     for (i=3;i<=n-2;i=i+2)
     {
         if (topcheck*topcheck<=i) topcheck++;
         if (pure(i,a,topnum,topcheck)&pure(i+2,a,topnum,topcheck+2)) 
         {
            printf("%d %d\n",i,i+2);
            empty=0;
         }
     }
     if (empty) printf("empty");
}

char pure(int n,int a[],int topnum,int topcheck)
{
     for (int i=0;i<=topnum;i++)
     {
         if (a[i]>=topcheck) break;
         if (n%a[i]==0) return 0;
     }
     return 1;
}