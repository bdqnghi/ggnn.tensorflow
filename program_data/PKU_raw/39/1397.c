void main()
{
	int N,x[100][3],i,total[100]={0};
	int T[100],s=0,k;
	char y[100][2],z[100][20];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%s %d %d %c %c %d",z[i],&x[i][0],&x[i][1],&y[i][0],&y[i][1],&x[i][2]);
    for(i=0;i<N;i++)
	{
		if(x[i][0]>80 && x[i][2]>0) total[i]=total[i]+8000;
		if(x[i][0]>85 && x[i][1]>80) total[i]=total[i]+4000;
		if(x[i][0]>90) total[i]=total[i]+2000;
        if(x[i][0]>85 && y[i][1]=='Y') total[i]=total[i]+1000;
		if(x[i][1]>80 && y[i][0]=='Y') total[i]=total[i]+850;
		s=s+total[i];
	}
	for(i=0;i<N;i++)
		T[i]=total[i];
	for(i=0;i<N-1;i++)
	{
		if(T[i]>T[i+1])
		{
            k=T[i];
			T[i]=T[i+1];
			T[i+1]=k;
		}
	}
	for(i=0;i<N;i++)
		if(total[i]==T[N-1])
		{
			printf("%s\n",z[i]);
			printf("%d\n",total[i]);
			printf("%d",s);
			break;
		}
}