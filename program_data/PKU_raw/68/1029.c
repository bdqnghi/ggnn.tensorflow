int R(int *p,int n)
{
     int i,m=0;
     if(p[n]==0)
     {
             for(i=2;i<=(int)sqrt(n);i++)
             if(n%i==0) m++;
             if(m==0) p[n]=1;
             else p[n]=2;
     }
     if(p[n]==1) return 1;
     else if(p[n]==2) return 2;
}
void Find(int *p,int n)
{
     int i;
     if(R(p,n-2)==1) printf("%d=%d+%d\n",n,2,n-2); 
     else
     {
         for(i=3;i<=n/2;i+=2)
         if(R(p,i)==1&&R(p,n-i)==1) break;
         if(R(p,i)==1&&R(p,n-i)==1) printf("%d=%d+%d\n",n,i,n-i);
     } 
}
main()
{
      int n,m;
      int *p;
      scanf("%d",&m);
      p=(int*)malloc((m)*sizeof(int));
      memset(p,0,sizeof(p));
      p[2]=1;
      for(n=6;n<=m;n+=2)
      Find(p,n);
      free(p);
}