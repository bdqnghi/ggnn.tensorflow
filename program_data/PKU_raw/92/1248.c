int comp(const void * elem1, const void * elem2)
{
	if(*(int*)elem1<*(int*)elem2)
		return 1;
	if(*(int*)elem1>*(int*)elem2)
		return -1;
	if(*(int*)elem1==*(int*)elem2)
		return 0;
}
main()
{
      int i,j,n;
      for(i=0;;i++)
      {
        scanf("%d",&n);
        if(n==0)
        break;
        int *tj = (int *)malloc(n*sizeof(int));
        int *qww= (int *)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        scanf("%d",&tj[j]);
       	qsort(tj,n,sizeof(int),comp);
        for(j=0;j<n;j++)
        scanf("%d",&qww[j]);
       	qsort(qww,n,sizeof(int),comp);
       j = 0;
        int s = 0;
       int  k = n-1;
        for(i = 0; i < n && j <= k;){
            if(tj[j] < qww[i]){
                s--;
                k--;
                i++;
            }
            else if(tj[j] == qww[i] ){
                if(tj[k] < qww[n-1]){
                    s--;
                    i++;
                    k--;
                }
                else if(tj[k] > qww[n-1]){
                    s++;
                    n--;
                    k--;
                }
                else if(tj[k] == qww[n-1]){
                    if(tj[k] != qww[i]){
                        s--;
                        i++;
                        k--;
                    }
                    else break;
                }
            }
            else{
                s++;
                i++;
                j++;
            }
        }
        printf("%d\n", s*200);
        free(tj);
        free(qww);
      }
}
