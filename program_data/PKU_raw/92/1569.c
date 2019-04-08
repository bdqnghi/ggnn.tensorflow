int compare(const void *elem1,const void *elem2)
{
    int *p1 = (int*)elem1;
    int *p2 = (int*)elem2;
    return (*p1)-(*p2); 
}

main()
{
    int *p1,*p2;
    int n,i,j,k,s;
    do {
        scanf("%d",&n);
        if(n!=0)
        {
                  p1=(int*)malloc(n*sizeof(int));
                  p2=(int*)malloc(n*sizeof(int));
                  for(i=0;i<n;i++)scanf("%d",&p1[i]);
                  for(i=0;i<n;i++)scanf("%d",&p2[i]);
                  qsort(p1, n, sizeof(int), compare);
                  qsort(p2, n, sizeof(int), compare);
                  for(i=0,s=0;i<n;i++)
                  {
                                  if(p1[i]>p2[i])s++;
                                  else if(p1[i]==p2[i])
                                  {
                                       if(i==n-1)break;
                                       else {
                                            for(k=n-1;k>i;k--)
                                       {
                                            if(p1[k]>p2[k])
                                            {
                                                           s++;
                                                           for(j=n-2;j>=i;j--)p1[j+1]=p1[j];
                                                           for(j=n-2;j>=i;j--)p2[j+1]=p2[j];
                                                           i++;
                                            }
                                            else 
                                            {
                                                 if(p1[i]<p2[k])s--;
                                                 for(j=n-2;j>=i;j--)p2[j+1]=p2[j];
                                                 break;
                                            }
                                       }                                       
                                       }
                                       }
                                  else{
                                       s--;
                                       for(j=n-2;j>=i;j--)p2[j+1]=p2[j];
                                  }
                  }
                  printf("%d\n",s*200);
        }
        }
    while(n!=0);
}     
