int main()
{
	int n,max[100],min[100];
	int i,j,t=0,tr=0;
	scanf("%d",&n);
	for(i=0,j=0;i<n;i++)
	{
		scanf("%d %d",&max[i],&min[i]);
		if(max[i]<=140&&max[i]>=90&&min[i]>=60&&min[i]<=90)
		{
			t++;
		}
		else
			t=0;
		if(t>=tr)
			tr=t;
	}
	printf("%d",tr);
	return 0;
}
