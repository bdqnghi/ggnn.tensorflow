/*?????? 
a)  ??????????????????? 
b)  ??????????? 
c)  ?????????? 
d)  ????????? 
*/
int exchange(int m[],int n)
{
	int i,j,l;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m[i]>m[j])
			{
				l=m[i];
				m[i]=m[j];
				m[j]=l;
			}
		}
	}
	return m;
}

int add(int x[],int y[],int e,int f)
{
	int g;
	for(g=0;g<f;g++)
	{
		x[e+g]=y[g];
	}
	return x;
}

void getint(int r[],int s)
{
	int t;
	for(t=0;t<s;t++)
	{
		scanf("%d",&r[t]);
	}
}

void print(int u[],int v)
{
	int w;
	for(w=0;w<v-1;w++)
	{
		printf("%d ",u[w]);
	}
	printf("%d",u[v-1]);
}

void main()
{
	int a[40],b[20],c,d;
	scanf("%d%d\n",&c,&d);
	getint(a,c),getint(b,d);
	print(add(exchange(a,c),exchange(b,d),c,d),c+d);
}