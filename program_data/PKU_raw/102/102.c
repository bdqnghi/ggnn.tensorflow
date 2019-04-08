
int cmp(const void *p1,const void *p2)
{
	float f1=*((float *)p1);
	float f2=*((float *)p2);
	if(f1>f2)
		return 1;
	else
		return -1;
}

int main()
{
	int i,j,k;
	int n;
    float h,h1[50],h2[50];
	while(scanf("%d",&n)!=EOF)
	{
		char temp[20];
		int cnt0=0,cnt1=0;
		for(i=0;i<n;i++)
		{
			scanf("%s%f",temp,&h);
			if(temp[0]=='m')
				h1[cnt0++]=h;
			else
				h2[cnt1++]=h;
		}
		qsort(h1,cnt0,sizeof(h1[0]),cmp);
		qsort(h2,cnt1,sizeof(h2[0]),cmp);
		for(i=0;i<cnt0;i++)
			printf("%.2f ",h1[i]);
		for(i=cnt1-1;i>0;i--)
			printf("%.2f ",h2[i]);
		printf("%.2f\n",h2[0]);
	}
	return 0;
}