


int main ()
{
  	int i,j,n;
	double m=0,l,a,b,c,d;

	scanf("%d",&n);
	struct point
	{
		float x,y;
	}   *p;
	 
		p=(struct point *)malloc(sizeof(point)*n);
		for(i=0;i<n;i++)
		{
			scanf("%f%f",&(p+i)->x,&(p+i)->y);
		}
		for(i=1;i<n;i++){
		for(j=0;j<i;j++)
			{
				a=(p+i)->x;b=(p+j)->x;c=(p+i)->y;d=(p+j)->y;
                l=sqrt((a-b)*(a-b)+(c-d)*(c-d));
				if(l>m)
					m=l;
			}
		}
		printf("%.4f",m);
		free (p);
  
}