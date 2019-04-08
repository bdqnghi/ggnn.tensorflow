int main ()
{
	int n;
	int a[10][3];
	double d[45][3];           
	int i=0;
	double change;
	cin>>n;
	for (int t=0;t<n;++t)
		cin>>a[t][0]>>a[t][1]>>a[t][2];
	for (int t1=0;t1<n;++t1)
		for (int t2=t1+1;t2<n;++t2)
		{
			d[i][0]=t1;
			d[i][1]=t2;
			d[i][2]=sqrt( (a[t1][0]-a[t2][0])*(a[t1][0]-a[t2][0]) +
					(a[t1][1]-a[t2][1])*(a[t1][1]-a[t2][1]) + (a[t1][2]-a[t2][2])*(a[t1][2]-a[t2][2]) );
			++i;               
		}
	for (int t1=0;t1<i-1;++t1)        
		for (int t2=0;t2<i-1-t1;++t2)
			if (d[t2][2]<d[t2+1][2])
			{
				change=d[t2][2];
				d[t2][2]=d[t2+1][2];
				d[t2+1][2]=change;

				change=d[t2][0];
				d[t2][0]=d[t2+1][0];
				d[t2+1][0]=change;

				change=d[t2][1];
				d[t2][1]=d[t2+1][1];
				d[t2+1][1]=change;
			}
	for (int t=0;t<i;++t)
		printf ("(%d,%d,%d)-(%d,%d,%d)=%0.2lf\n",a[(int) d[t][0]][0],a[(int) d[t][0]][1],
				a[(int) d[t][0]][2],a[(int) d[t][1]][0],a[(int) d[t][1]][1],a[(int) d[t][1]][2],d[t][2]);
	return 0;
}


