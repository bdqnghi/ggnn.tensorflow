void main()
{
	int n,i;
	float GPA,fen[10],jh=0,xd[10],xh=0,xf[10],score[10];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%f",&xf[i]);
		xh=xh+xf[i];
	}
	for(i=0;i<=n-1;i++)
	{
	scanf("%f",&score[i]);
	if(score[i]>=90)
    	fen[i]=4.0;
	else if(score[i]>=85)
		fen[i]=3.7;
	else if(score[i]>=82)
		fen[i]=3.3;
	else if(score[i]>=78)
	    fen[i]=3.0;
	else if(score[i]>=75)
    	fen[i]=2.7;
	else if(score[i]>=72)
		fen[i]=2.3;
	else if(score[i]>=68)
		fen[i]=2.0;
	else if(score[i]>=64)
		fen[i]=1.5;
	else if(score[i]>=60)
    	fen[i]=1.0;
    else
        fen[i]=0;
	xd[i]=fen[i]*xf[i];
	jh=jh+xd[i];
	}
	GPA=jh/xh;
	printf("%.2f",GPA);
}
	
