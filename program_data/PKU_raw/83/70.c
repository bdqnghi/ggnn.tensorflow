
int main(int argc, char* argv[])
{   
	int n,i;
	int ji[30],fen[30];
	float dian[30];
	double xueji,zongping,xuefenhe;
	
    scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&ji[i]);
	}
	for (i=0;i<n;i++)
	{
		scanf("%d",&fen[i]);
	    if (fen[i]>=90&&fen[i]<=100)
		dian[i]=4.0;
        if (fen[i]>=85&&fen[i]<=89)
		dian[i]=3.7;
        if (fen[i]>=82&&fen[i]<=84)
		dian[i]=3.3;
        if (fen[i]>=78&&fen[i]<=81)
		dian[i]=3.0;
        if (fen[i]>=75&&fen[i]<=77)
		dian[i]=2.7;
        if (fen[i]>=72&&fen[i]<=74)
		dian[i]=2.3;
        if (fen[i]>=68&&fen[i]<=71)
		dian[i]=2.0;
        if (fen[i]>=64&&fen[i]<=67)
		dian[i]=1.5;
        if (fen[i]>=60&&fen[i]<=63)
		dian[i]=1.0;
        if (fen[i]<=60)
		dian[i]=0;
		
	}
	for (xuefenhe=0,xueji=0,i=0;i<n;i++)
	{
		xueji=xueji+dian[i]*ji[i];
		xuefenhe=xuefenhe+ji[i];
	}
	zongping=xueji/xuefenhe;
	printf("%.2f",zongping);


	return 0;
}
