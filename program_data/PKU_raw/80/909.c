int main()
{
	int a[13][32],b[373],i,j,k,y1,m1,d1,y2,m2,d2,q,x1,x2,q1,q2,fuhao;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	for(i=1;i<13;i++)
	{
		for(j=1;j<32;j++)
		{
			a[i][j]=1;
		}
	}
	a[2][29]=0;a[2][30]=0;a[2][31]=0;a[4][31]=0;a[6][31]=0;a[9][31]=0;a[11][31]=0;
	for(i=1,k=1;i<13;i++)
	{
		for(j=1;j<32;j++)
		{
			b[k]=a[i][j];
			k=k+1;
		}
	}
	x1=(m1-1)*31+d1;
	x2=(m2-1)*31+d2;
	fuhao=1;
	if(x1>x2)
	{
		fuhao=x1;
		x1=x2;
		x2=fuhao;
		fuhao=-1;
	}
	for(q=0,k=x1;k<x2;k++)
		q=(q+b[k]);
	q=365*(y2-y1)+q*fuhao;

	for(i=y1+1,q1=0;i<y2;i++)
	{
		if(i%4==0&&i%100!=0)q1=q1+1;
		if(i%400==0)q1=q1+1;		
	}
	if((y1%4==0&&y1%100!=0)||(y1%400==0))
	{
		if(m1==1)q1=q1+1;
		if(m1==2&&d1<=29)q1=q1+1;
	}
	if((y2%4==0&&y2%100!=0)||(y2%400==0))
	{
		if(m2>=3)q1=q1+1;
		if(m2==2&&d2==29)q1=q1+1;
	}
	q=q+q1;
	printf("%d",q);
	return 0;


	


}