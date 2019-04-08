	struct dis
	{
		int place_p1;
		int p1[3];
		int place_p2;
		int p2[3];
		float distance;
	}p[45];
void main()
{
void exchange(struct dis *pa,struct dis *pb);

	int n,i,j,point[10][3],count=0;
    struct dis *po=p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&point[i][0],&point[i][1],&point[i][2]);
	



    for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			po->place_p1=i;
            po->p1[0]=point[i][0];
            po->p1[1]=point[i][1];
			po->p1[2]=point[i][2];
			po->place_p2=j;
			po->p2[0]=point[j][0];
			po->p2[1]=point[j][1];
			po->p2[2]=point[j][2];
			float d1,d2,d3;
			d1=(float)point[i][0]-point[j][0];
            d2=(float)point[i][1]-point[j][1];
            d3=(float)point[i][2]-point[j][2];
			po->distance=sqrt(d1*d1+d2*d2+d3*d3);
			po++;
		}
	


	for(i=0;i<n*(n-1)/2;i++)
		for(j=0;j<n*(n-1)/2;j++)
			if(p[j].distance<p[j+1].distance)
				exchange(&p[j],&p[j+1]);

	for(i=0,po=p;i<n*(n-1)/2;i++,po++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",po->p1[0],po->p1[1],po->p1[2],po->p2[0],po->p2[1],po->p2[2],po->distance);
}



void exchange(struct dis *pa,struct dis *pb)
{
	float temp;int i;
	int t;
	t=pa->place_p1;pa->place_p1=pb->place_p1;pb->place_p1=t;
	t=pa->place_p2;pa->place_p2=pb->place_p2;pb->place_p2=t;
	for(i=0;i<3;i++)
	{
		t=pa->p1[i];pa->p1[i]=pb->p1[i];pb->p1[i]=t;
		t=pa->p2[i];pa->p2[i]=pb->p2[i];pb->p2[i]=t;
	}

	temp=pa->distance;
	pa->distance=pb->distance;
	pb->distance=temp;
}