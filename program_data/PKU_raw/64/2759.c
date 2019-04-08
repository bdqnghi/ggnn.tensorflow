struct dot{
	int x;
	int y;
	int z;
}dots[10];
struct dist{
	int d1;
	int d2;
	float dis;
}dists[45];
int cmp(const void *p1,const void *p2)
{
	struct dist l1,l2;
	l1=*(struct dist *)p1;
	l2=*(struct dist *)p2;
	if(l1.dis>l2.dis)
	{
		return -1;
	}else if(l1.dis<l2.dis)
	{
		return 1;
	}else{
		if(l1.d1!=l2.d1)
		{
			return l1.d1-l2.d1;
		}else{
			return l1.d2-l2.d2;
		}
	}
	return 0;
}
int main()
{
	int n,i,j,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d%d%d",&dots[i].x,&dots[i].y,&dots[i].z);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dists[t].d1=i;
			dists[t].d2=j;
			dists[t].dis=sqrt((dots[i].x-dots[j].x)*(dots[i].x-dots[j].x)+(dots[i].y-dots[j].y)*(dots[i].y-dots[j].y)+(dots[i].z-dots[j].z)*(dots[i].z-dots[j].z));
			t++;
		}
	}
	qsort(&dists[0],t,sizeof(struct dist),cmp);
	for(i=0;i<t;i++)printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dots[dists[i].d1].x,dots[dists[i].d1].y,dots[dists[i].d1].z,dots[dists[i].d2].x,dots[dists[i].d2].y,dots[dists[i].d2].z,dists[i].dis);
	return 0;
}
