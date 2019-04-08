void sort(int sz[], int n)
{
	int k,e,i;
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(sz[i]<sz[i+1]){
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
}
int main()
{
	while(1){
	int n,i,j;
	scanf("%d",&n);
	if(n==0) break;
	int *tian=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&tian[i]);
	}
	int *king=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&king[i]);
	}
	sort(tian,n);
	sort(king,n);
	int win=0,twin=0,even=0,teven=0,lose=10000,tlose=0;
	int temp;
	for(i=0;i<n; i++)
    {
        temp=i;
        i=0;
        for(j=temp;j<n;j++,i++)
        {
            if(tian[i]>king[j])
            {
                twin++;
            }
            else if(tian[i]<king[j])
            {
                tlose++;
            }
            else
            {
                teven++;
            }
        }
        tlose+=temp;
        if((twin-tlose)>(win-lose))
        {
            win=twin;
            lose=tlose;
            even=teven;
        }
        i=temp;
        twin=0;
        tlose=0;
        teven=0;
    }
	printf("%d\n",200*(win-lose));
	free(tian);
	free(king);
	}
	return 0;
}
