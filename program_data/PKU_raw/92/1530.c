
int cmp(const void *a,const void *b)
{return *(int*)b-*(int*)a;}

main()
{
      int n,i,r;
      int tk,tm,qk,qm;
      int t[1000],q[1000];
      for(;;)
      {
          scanf("%d",&n);
          if(n==0) break;
          for(i=0;i<n;i++)scanf("%d",t+i);
          for(i=0;i<n;i++)scanf("%d",q+i);
          qsort(t,n,sizeof(int),cmp);
          qsort(q,n,sizeof(int),cmp);
          r=0;
          tk=0;
          tm=n-1;
          qk=0;
          qm=n-1;
          while(tk<=tm)
          {
                   if(t[tm]>q[qm]){r++;tm--;qm--;}
              else if(t[tk]>q[qk]){r++;tk++;qk++;}
              else if(t[tm]<q[qk]){r--;tm--,qk++;}
              else {tm--;qk++;}
          }
          printf("%d\n",200*r);
                   
      }
}