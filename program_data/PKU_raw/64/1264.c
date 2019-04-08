struct point{
	int a[3];
	int b[3];
	double distant;
}p[45],change;
void swap(struct point p[],int k);
void main()
{
	int i,j,k=0,n;
	int x[10],y[10],z[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for(j=0;j<n-1;j++)
		for(i=j+1;i<n;i++){
			p[k].a[0]=x[j];
			p[k].a[1]=y[j];
			p[k].a[2]=z[j];
			p[k].b[0]=x[i];
			p[k].b[1]=y[i];
			p[k].b[2]=z[i];
			p[k++].distant=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2)+pow(z[j]-z[i],2));
		}
	swap(p,k-1);
	for(i=0;i<k;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",p[i].a[0],p[i].a[1],p[i].a[2],p[i].b[0],p[i].b[1],p[i].b[2],p[i].distant);
}
void swap(struct point p[],int k)
{
	int r,q;
	for(r=0;r<k;r++)
		for(q=0;q<k-r;q++)
			if(p[q].distant<p[q+1].distant){
				change=p[q];
				p[q]=p[q+1];
				p[q+1]=change;
			}
}