int main(){
	int i,a[1000][3],n,e,j,k=0,h;
	double m[3000][3],r,p,q;
	scanf("%d",&n);
    h=n*(n-1)/2;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<n;i++)
    {
		for(j=i+1;j<n;j++)
		{
			m[k][0]=i;
			m[k][1]=j;
			m[k][2]=sqrt((double) ((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])));
			k++;
		}
	}
	for(i=1;i<h;i++)
    {
      for(k=0;k<h-i;k++)
	  {
		if(m[k][2]<m[k+1][2])
		{
            r=m[k][0];
            m[k][0]=m[k+1][0];
            m[k+1][0]=r;
			p=m[k][1];
            m[k][1]=m[k+1][1];
            m[k+1][1]=p;
			q=m[k][2];
            m[k][2]=m[k+1][2];
            m[k+1][2]=q;
		}
	  }
	}
	for(i=0;i<h;i++)
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[(int)m[i][0]][0],a[(int)m[i][0]][1],a[(int)m[i][0]][2],a[(int)m[i][1]][0],a[(int)m[i][1]][1],a[(int)m[i][1]][2],m[i][2]);
    return 0;
}