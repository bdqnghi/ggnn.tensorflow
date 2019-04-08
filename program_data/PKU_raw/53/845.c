int main()
{
    int sz[300];
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
        }
   printf("%d",sz[0]);
   for(j=1;j<n;j++){
      int f=0;
      for(l=0;l<j;l++){
        if(sz[j]==sz[l])  f=1;
        }
        if(f==0) printf(",%d",sz[j]);
        }
        return 0;
        }