int main()
{
	int k,i,m[25][2],max=0;
	scanf("%d\n",&k);
	for(i=0;i<k;i++)
		scanf("%d",&m[i][0]);
	void deal(int,int x[][2]);
	deal(k,m);
	for(i=0;i<k;i++)
		if(m[i][1]>max) max=m[i][1];
	printf("%d",max);
	return 0;
}
void deal(int k,int m[][2])
{
	int i,j,max;
	for(i=0;i<k;i++)
	{
		max=0;
		for(j=0;j<i;j++)
			if(m[j][0]>=m[i][0] && m[j][1]>max) max=m[j][1];
		m[i][1]=max+1;
	}
}
