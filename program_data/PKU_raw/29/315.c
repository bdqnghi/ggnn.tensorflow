
int main(int argc, char* argv[])
{
	int m,n[100],i,j,k,fm[100]={0},fz[100]={0};
	double h[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==1)
		{
			h[i]=2.000;
		}
		else if(n[i]==2)
		{
			h[i]=3.500;
		}
		else
		{
			fz[0]=2,fz[1]=3;
			fm[0]=1,fm[1]=2;
			h[i]=3.500;
			for(k=2;k<n[i];k++)
			{
				fm[k]=fm[k-1]+fm[k-2];
				fz[k]=fz[k-1]+fz[k-2];
				h[i]+=(fz[k]*1.000/fm[k]*1.000);
			}
		}
		printf("%.3lf\n",h[i]);
	}
	return 0;
}