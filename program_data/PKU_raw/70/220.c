
int main(int argc, char* argv[])
{
	int n,i,j,m;
	int num;
	double *dis,a;
	struct point
	{
	   double x,y;
	};
	point *dot;
	scanf("%d",&n);
	dot=(struct point*)malloc(sizeof(point)*n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&((dot+i)->x),&((dot+i)->y) );
	}    //?????

    num=(n*(n-1)/2);
	dis=(double*)malloc(sizeof(double)*num);//????????

    
    for (m=0,i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++,m++)
		{
		 dis[m]=sqrt( ((dot+i)->x-(dot+j)->x)*((dot+i)->x-(dot+j)->x) + ((dot+i)->y-(dot+j)->y)*((dot+i)->y-(dot+j)->y) );
		}
	}//?????????


    for(m=0;m<(num-1);m++)
	{
		if(dis[m]>dis[m+1])
		{
		 a=dis[m+1];
	     dis[m+1]=dis[m];
		 dis[m]=a;
		}
	}//?????????

 	printf("%.4f\n",dis[num-1]);
	free(dot);
	free(dis);
	return 0;
}
