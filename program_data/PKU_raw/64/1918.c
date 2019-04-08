//????????
struct point{
		int x;
		int y;
		int z;
	}input[10]={0};
struct point u;
struct point v;
struct total{
	struct point u;
	struct point v;
	double result;
	}output[45]={0};
//???????????
double distance(struct point a,struct point b)
{
	return(sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z)));
}
void sort(struct total c[],int d)
{
	int m,n;
	struct total temp;
	for(m=1;m<d;m++)
		for(n=0;n<d-m;n++)
			if(c[n].result<c[n+1].result){
				temp=c[n];
				c[n]=c[n+1];
				c[n+1]=temp;
			}
}
//???
void main()
{
	int n,i,j,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&input[i].x,&input[i].y,&input[i].z);
	p=-1;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			p++;
			output[p].u=input[i];
			output[p].v=input[j];
			output[p].result=distance(output[p].u,output[p].v);
		}
	}
	sort(output,p+1);
	for(i=0;i<=p;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",output[i].u.x,output[i].u.y,output[i].u.z,output[i].v.x,output[i].v.y,output[i].v.z,output[i].result);
}




