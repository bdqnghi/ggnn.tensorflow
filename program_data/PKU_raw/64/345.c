struct
{
	float a;
	int f,g;
}s[50],temp;
void main()
{
	int n,i,j,x[10],y[10],z[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d%d%d",&x[i],&y[i],&z[i]);
	int t=0;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			s[t].a=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			s[t].f=i;
			s[t].g=j;
			t++;
		}
	for(i=0;i<t-1;i++)
		for(j=0;j<t-i-1;j++)
			if(s[j].a<s[j+1].a)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
	for(i=0;i<t;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[s[i].f],y[s[i].f],z[s[i].f],x[s[i].g],y[s[i].g],z[s[i].g],s[i].a);
}