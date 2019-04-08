int main()
{
	int xiajie[11]={100,90,85,82,78,75,
	 72,68,64,60,0};
	double st[11]={0,4.0,3.7,3.3,3.0,2.7,
	 2.3,2.0,1.5,1.0,0};
    int n,score[10],defen,i,j,sums=0;
    double sumj=0.0,jidian[10];
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%d",&score[i]);
	for (i=1;i<=n;i++) 
	{
		scanf("%d",&defen);
		j=0;
		while ((j<10)&&(defen<xiajie[j]))
        {
        	jidian[i]=st[++j];
        }
        jidian[i]*=score[i];
	}
	for (i=1;i<=n;i++) sumj+=jidian[i];
	for (i=1;i<=n;i++) sums+=score[i];
	printf("%.2lf",1.0*sumj/sums);    
} 