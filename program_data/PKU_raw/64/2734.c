struct zuobiao
{
	int x;
	int y;
	int z;
};
struct zuhe
{
	struct zuobiao dian1;
	struct zuobiao dian2;
	double s;
};
double juli(int x3,int y3,int z3,int x4,int y4,int z4)
{
	double d;
	d=(x4-x3)*(x4-x3)+(y4-y3)*(y4-y3)+(z4-z3)*(z4-z3);
	d=sqrt(d);
	return d;
}
int main()
{
	struct zuobiao dian[20];
	struct zuhe zu[100];
	struct zuhe c;
	int n,m,i,j,k=0;
	double l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&dian[i].x,&dian[i].y,&dian[i].z);
	}
	m=n*(n-1)/2;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<n;j++)
		{
			l=juli(dian[i].x,dian[i].y,dian[i].z,dian[j].x,dian[j].y,dian[j].z);
			zu[k].dian1=dian[i];
			zu[k].dian2=dian[j];
			zu[k].s=l;
			k++;
		}
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(zu[j].s<zu[j+1].s)
			{
				c=zu[j];
				zu[j]=zu[j+1];
				zu[j+1]=c;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",zu[i].dian1.x,zu[i].dian1.y,zu[i].dian1.z,zu[i].dian2.x,zu[i].dian2.y,zu[i].dian2.z,zu[i].s);
	}
}

			







