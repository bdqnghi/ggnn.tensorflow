int JU[100][100];
int main()
{
	int n,i,j,h,l,M;
	void JUbian(int N,int JU[100][100]);
	void JUxiao(int N,int JU[100][100]);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		M=0;
		for(h=0;h<n;h++)
		{
			for(l=0;l<n;l++)
			{scanf("%d",&JU[h][l]);}
		}
		for(j=n;j>1;j--)
		{
			JUbian(j,JU);
			M=M+JU[1][1];
			JUxiao(j,JU);
		}
		printf("%d\n",M);
	}
	return 0;
}

void JUbian(int n,int JU[100][100])
{
	int h,l,min;
	for(h=0;h<n;h++)
	{
		min=JU[h][0];
		for(l=1;l<n;l++)
		{if(JU[h][l]<min) min=JU[h][l];}
	    for(l=0;l<n;l++)
		{JU[h][l]=JU[h][l]-min;}
	}
	for(l=0;l<n;l++)
	{
		min=JU[0][l];
		for(h=1;h<n;h++)
		{if(JU[h][l]<min) min=JU[h][l];}
		for(h=0;h<n;h++)
		{JU[h][l]=JU[h][l]-min;}
	}
}


void JUxiao(int n,int JU[100][100])
{
	int h,l;
	for(h=0;h<n-1;h++)
	{
		for(l=0;l<n;l++)
		{
			if(h>0) {JU[h][l]=JU[h+1][l];}
		}
	}
	for(l=0;l<n-1;l++)
	{
		for(h=0;h<n-1;h++)
		{
			if(l>0) {JU[h][l]=JU[h][l+1];}
		}
	}
}
