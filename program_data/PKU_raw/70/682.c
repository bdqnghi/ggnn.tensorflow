int main()
{
	int n;
	double x[50],y[50],*px,*py,*px2,*py2,temp,max;
	scanf("%d",&n);
	for(px=x,py=y;px<x+n;px++,py++)
		scanf("%lf %lf",px,py);
	max=0;
	for(px=x,py=y;px<x+n;px++,py++)
		for(px2=px+1,py2=py+1;px2<x+n&&py2<y+n;px2++,py2++)
			{temp=(*px-*px2)*(*px-*px2)+(*py-*py2)*(*py-*py2);
			max=(max<temp)?temp:max;}
	
	printf("%.4lf\n",sqrt(max));
    return 0;
	
}
