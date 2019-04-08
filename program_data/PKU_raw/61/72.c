int f(int n)
{
 if(n==1) return 1;
 else if(n==2) return 1;
 else  return f(n-1)+f(n-2); 
}
main()
{int n,a[10000];
scanf("%d",&n);
 int i;
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
                   printf ("%d\n",f(a[i]));
}
      getchar();
      }
