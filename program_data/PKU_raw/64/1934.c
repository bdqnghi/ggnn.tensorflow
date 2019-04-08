struct point{
	int x;
	int y;
	int z;
}point[10];
struct jl{
	int c;
	int d;
	float f;
}jl[45];
int main()
{
    int n,i,j;
	struct jl t;
	float juli(struct point a,struct point b);
	scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%d%d%d",&point[i].x,&point[i].y,&point[i].z);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			jl[n*i-i*(i+1)/2+j-i-1].f=juli(point[i],point[j]);
			jl[n*i-i*(i+1)/2+j-i-1].c=i;
			jl[n*i-i*(i+1)/2+j-i-1].d=j;
		}
	for(j=1;j<n*(n-1)/2;j++)
		for(i=0;i<n*(n-1)/2-j;i++)
			if(jl[i].f<jl[i+1].f){
				t=jl[i];
				jl[i]=jl[i+1];
				jl[i+1]=t;
			}
	for(i=0;i<n*(n-1)/2;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",point[jl[i].c].x,point[jl[i].c].y,point[jl[i].c].z,point[jl[i].d].x,point[jl[i].d].y,point[jl[i].d].z,jl[i].f);
	return 0;
}
float juli(struct point a,struct point b)
{
	float k;
	k=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
	return k;
}
