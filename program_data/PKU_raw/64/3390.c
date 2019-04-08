struct d
{
	int x;
	int y;
	int z;
};
struct p
{
	struct d s1,s2;
	float res;
};
float f(struct d s1,struct d s2)
{
	double sum=0;
	sum=(s1.x-s2.x)*(s1.x-s2.x)+(s1.y-s2.y)*(s1.y-s2.y)+(s1.z-s2.z)*(s1.z-s2.z);
	return(sqrt(sum));
}
void change(struct p pri[300],int n)
{
	int i,j;
	struct p temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(pri[j].res<pri[j+1].res)
			{
				temp.s1.x=pri[j].s1.x;
                temp.s1.y=pri[j].s1.y;
                temp.s1.z=pri[j].s1.z;
                temp.s2.x=pri[j].s2.x;
                temp.s2.y=pri[j].s2.y;
                temp.s2.z=pri[j].s2.z;
				temp.res=pri[j].res;
                pri[j].s1.x=pri[j+1].s1.x;
                pri[j].s1.y=pri[j+1].s1.y;
                pri[j].s1.z=pri[j+1].s1.z;
                pri[j].s2.x=pri[j+1].s2.x;
                pri[j].s2.y=pri[j+1].s2.y;
                pri[j].s2.z=pri[j+1].s2.z;
				pri[j].res=pri[j+1].res;
                pri[j+1].s1.x=temp.s1.x;
                pri[j+1].s1.y=temp.s1.y;
                pri[j+1].s1.z=temp.s1.z;
                pri[j+1].s2.x=temp.s2.x;
                pri[j+1].s2.y=temp.s2.y;
                pri[j+1].s2.z=temp.s2.z;
			    pri[j+1].res=temp.res;
			}
		}
	}
}
void main()
{
	int n;
	int i,j;
	int k=0,h=0;
	float res[100];
	struct d s[100];
	struct p pri[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&s[i].x,&s[i].y,&s[i].z);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			res[k]=f(s[i],s[j]);
			pri[h].s1.x=s[i].x;
			pri[h].s1.y=s[i].y;
			pri[h].s1.z=s[i].z;
            pri[h].s2.x=s[j].x;
			pri[h].s2.y=s[j].y;
			pri[h].s2.z=s[j].z;
			pri[h].res=res[k];
			h++;
			k++;
		}
	}
	change(pri,h);
	for(i=0;i<h;i++)
		//(0,0,0)-(1,1,1)=1.73//
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",pri[i].s1.x,pri[i].s1.y,pri[i].s1.z,pri[i].s2.x,pri[i].s2.y,pri[i].s2.z,pri[i].res);
}
			