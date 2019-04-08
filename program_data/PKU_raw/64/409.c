
struct point{
	int x;
	int y;
	int z;};

struct dis{
	float distance;
	struct point d1;
	struct point d2;};

int main()
{
	void bubble(struct dis b[100],int len);
	float fun(struct point pt1,struct point pt2);
	int n,m,num,i,up,w;
	struct dis a[100]={0,0,0};
	struct point pt[10]={0,0,0};

	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		scanf("%d%d%d",&pt[i].x,&pt[i].y,&pt[i].z);
	}
	//printf("%d%d%d",pt[1].x,pt[2].x,pt[3].x);
	w=num*(num-1)/2;
	for(i=0;i<w;)
	{
	    for(n=0;n<num-1;n++)
		{
		     for(m=n+1;m<num;m++)
			 {
			     a[i].distance=fun(pt[n],pt[m]);
				 a[i].d1.x=pt[n].x;
				 //printf("%d",a[i].d1.x);
				 a[i].d1.y=pt[n].y;
				 a[i].d1.z=pt[n].z;
				 a[i].d2.x=pt[m].x;
				 a[i].d2.y=pt[m].y;
				 a[i].d2.z=pt[m].z;
				 i++;
			 }
		}
		
	}
	up=i;
	//printf("%d",up);
	//printf("%d%d",a[1].d1.x,a[1].d1.y);


    bubble(a,up);

	for(i=0;i<up;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%3.2f\n",a[i].d1.x,a[i].d1.y,a[i].d1.z,a[i].d2.x,a[i].d2.y,a[i].d2.z,a[i].distance);
	}

	return 0;
}

float fun(struct point p1,struct point p2)
{
	float result,mid;
	mid=(p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z);
	result=sqrt(mid);
	return(result);
}

void bubble(struct dis b[100],int len)
{
	int i,pass;
	struct dis temp;//temp????????????
	
	for(pass=1;pass<len;pass++)
	{
		for(i=0;i<len-pass;i++)
		{
			if(b[i].distance<b[i+1].distance)
			{temp=b[i];b[i]=b[i+1];b[i+1]=temp;}
		}
	}
}


    

