int main(int argc, char* argv[])
{
    double *p,*j;
	int k;
	scanf("%d\n",&k);
	p=(double*)malloc(sizeof(double)*k);
    j=(double*)malloc(sizeof(double)*k);
	int i;
	for (i=0;i<k;i++){
		float x,y;
		scanf("%f %f",&x,&y);
		p[i]=x;
		j[i]=y;

	}
	double l;
	l=sqrt((p[0]-p[0])*(p[0]-p[0])+(j[0]-j[0])*(j[0]-j[0]));
	int m;
	int n;
	double g;
	for(m=0;m<k;m++)
	{
		for(n=0;n<k;n++){
        g=sqrt((p[m]-p[n])*(p[m]-p[n])+(j[m]-j[n])*(j[m]-j[n]));
        if(g>l)
			l=g;
		else
			l=l;
		}
	}
	printf("%.4f\n",l);
	return 0;
	free(p);
	free(j);
}

