
int main(){
	int n,i,j,k,l;
	int x[20],y[20],z[20];
	struct
	{
		int x1,y1,z1;
		int x2,y2,z2;
		double dis;
	}
	out[50],h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			out[k].x1=x[i];
			out[k].y1=y[i];
			out[k].z1=z[i];
			out[k].x2=x[j];
			out[k].y2=y[j];
			out[k].z2=z[j];
			k++;
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		out[i].dis=sqrt((out[i].x1-out[i].x2)*(out[i].x1-out[i].x2)
			+(out[i].y1-out[i].y2)*(out[i].y1-out[i].y2)
			+(out[i].z1-out[i].z2)*(out[i].z1-out[i].z2));
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		for(j=n*(n-1)/2-1;j>i;j--)
		{
			if(out[j].dis>out[j-1].dis)
			{
				h=out[j];
				out[j]=out[j-1];
				out[j-1]=h;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",out[i].x1,
			out[i].y1,out[i].z1,out[i].x2,out[i].y2,out[i].z2
			,out[i].dis);
	}
	return 0;
}
