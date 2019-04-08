
int compare(const void *a,const void *b)
{
    return *(int*)b-*(int*)a ;
}

main()
{
      int n;
      int t[1000];
      int q[1000];
      int i,j,k,m;
      int r,tk,tm,qk,qm;
      for(;;)
      { 
      scanf("%d",&n);
      if(n==0)
      break;
      for(i=0;i<n;i++)
      
                      scanf("%d",&t[i]);
      for(i=0;i<n;i++)
                      scanf("%d",&q[i]);
                      
      qsort(t,n,sizeof(int),compare);
      qsort(q,n,sizeof(int),compare);
      r=0;
      tk=0;
      tm=n-1;
     qk=0;
     qm=n-1;
     while(tk<=tm)
     {  
                  if(t[tm]>q[qm])
                  {r++;tm--;qm--;}
                  else if(t[tk]>q[qk])
                  {r++;tk++;qk++;}
                    else if(t[tm]<q[qk])
                  {r--;tm--;qk++;}
                  else break;
}

printf("%d\n",r*200);
}

}                                 
