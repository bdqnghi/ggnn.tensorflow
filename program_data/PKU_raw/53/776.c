int main()
{
	int n, i, j, cal;
	cal=1;
	int pd=0;
	int sz[300];
	int xsz[300];
	scanf("%d", &n);
	for(i=0;i<n;i++)
			scanf("%d",&sz[i]);
	xsz[0]=sz[0];
	for(j=1;j<n;j++){
		pd=0;
		for(i=0;i<j;i++){
			if(sz[i]==sz[j])
			pd=1;
		}
		if(pd==0){
		xsz[cal]=sz[j];
			cal++;
		}
	}
	for(i=0;i<cal-1;i++)
	printf("%d,", xsz[i]);
	printf("%d", xsz[cal-1]);
	return 0;
}