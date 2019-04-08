

int a[100],b[100],x,y,i,j,k;
void a1();
void b1(int *p,int n);
void c(int *p1,int x,int *p2,int y);
void d(int x,int y);

void a1()
{
	cin>>x>>y;
	for (i=0;i<x;i++)
		cin>>a[i];
	for (i=0;i<y;i++)
		cin>>b[i];
}

void b1(int *p,int n)
{
	for (i=0;i<n-1;i++)
		for (j=0;j<n-1-i;j++)
		{
			if (p[j+1]<p[j])
			{
				k=p[j];
				p[j]=p[j+1];
				p[j+1]=k;
			}
		}
}

void c(int *p1,int x,int *p2,int y)
{
	for (i=x,j=0;i<x+y;j++,i++)
		p1[i]=p2[j];
}

void d(int x,int y)
{
	cout<<a[0];
	for (i=1;i<x+y;i++)
		cout<<" "<<a[i];
}


int main ()
{
	a1();
	b1(a,x);
	b1(b,y);
	c(a,x,b,y);
	d(x,y);
	return 0;
}