struct Line
{
	int n1;
	int n2;
	double dis;
};
int main()
{
	double distance(double a[3],double b[3]);
	struct Line l[55];
	double num[10][3],td;
	int n,i,j,k,p,q,t,num1[10][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&num[i][0],&num[i][1],&num[i][2]);
	}
	k=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			l[k].dis=distance(num[i],num[j]);
			l[k].n1=i;
			l[k].n2=j;
			k++;
		}
	}
	for(q=1;q<k;q++)
	{
		for(p=0;p<k-q;p++)
		{
			if(l[p].dis<l[p+1].dis)
			{
				t=l[p].n1;l[p].n1=l[p+1].n1;l[p+1].n1=t;
				t=l[p].n2;l[p].n2=l[p+1].n2;l[p+1].n2=t;
				td=l[p].dis;l[p].dis=l[p+1].dis;l[p+1].dis=td;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		num1[i][0]=(int)num[i][0];
		num1[i][1]=(int)num[i][1];
		num1[i][2]=(int)num[i][2];
	}
	for(i=0;i<k;i++)
	{
		p=l[i].n1;
		q=l[i].n2;
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",num1[p][0],num1[p][1],num1[p][2],num1[q][0],num1[q][1],num1[q][2],l[i].dis);
	}
	return 0;
}

double distance(double a[3],double b[3])
{
	double m;
	m=sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1])+(a[2]-b[2])*(a[2]-b[2]));
	return m;
}
