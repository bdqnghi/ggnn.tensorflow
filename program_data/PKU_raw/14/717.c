struct stu
{
	int ID;
	int c;
	int m;
};
struct stu a[100000];


int main(int argc, char* argv[])
{
	int n,i,x,y,z,t,q,w,e;
	int b[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i].ID);
		scanf("%d ",&a[i].c);
        scanf("%d",&a[i].m);
	}
	for(i=0;i<n;i++)
		b[i]=a[i].c+a[i].m;
	if(b[0]>b[1]&&b[1]>b[2])
	{
		x=b[0];
		q=1;
		y=b[1];
		w=1+1;
		z=b[2];
		e=2+1;
	}
	else if(b[1]>b[0]&&b[0]>b[2])
	{
		x=b[1];
		y=b[0];
		z=b[2];
		q=1+1;
		w=0+1;
		e=2+1;
	}
	else if(b[2]>b[1]&&b[1]>b[0])
	{
		x=b[2];
		y=b[1];
		z=b[0];
		q=2+1;
		w=1+1;
		e=0+1;
	}
	else if(b[2]>b[0]&&b[0]>b[1])
	{
		x=b[2];
		y=b[0];
		z=b[1];
		q=2+1;
		w=0+1;
		e=1+1;
	}
	else if(b[1]>b[2]&&b[2]>b[0])
	{
		x=b[1];
		y=b[2];
		z=b[0];
		q=1+1;
		w=2+1;
		e=0+1;
	}else if(b[0]>b[2]&&b[2]>b[1])
	{
		x=b[0];
		y=b[2];
		z=b[1];
		q=0+1;
		w=2+1;
		e=1+1;
	}
	for(i=3;i<n;i++)
	{
		if(b[i]>x)
		{
			t=x;
			x=b[i];
			z=y;
			y=t;
			e=w;
			w=q;
			q=i+1;
		}
		else if(b[i]>y)
		{
			z=y;
			y=b[i];
			e=w;
			w=i+1;
		}
		else if(b[i]>z)
		{
			z=b[i];
			e=i+1;
		}
	}
	printf("%d %d\n",q,x);
	printf("%d %d\n",w,y);
	printf("%d %d\n",e,z);

	return 0;
}


