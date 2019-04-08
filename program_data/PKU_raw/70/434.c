double max=0;
void main() 
{
	void distance(float x1,float y1,float x2,float y2);
	float x[10],y[10];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%f%f",&x[i],&y[i]);
	for(i=0;i<n;i++)for(j=i+1;j<n;j++)distance(x[i],y[i],x[j],y[j]);			
	printf("%.4lf",sqrt(max));
}
void distance(float x1,float y1,float x2,float y2)
{
	double temp;
	temp=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	if(temp>max)max=temp;
}
