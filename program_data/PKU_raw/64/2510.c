void main()
{
	int num,r,s,t,q2,a[200],b[200];
	double x[20],y[20],z[20],result[200],q1;
	scanf("%d",&num);
	for(r=0;r<num;r++) scanf("%lf%lf%lf",&x[r],&y[r],&z[r]);
	for(r=0,t=0;r<num-1;r++){
		for(s=r+1;s<num;s++){
			result[t]=sqrt((x[r]-x[s])*(x[r]-x[s])+(y[r]-y[s])*(y[r]-y[s])+(z[r]-z[s])*(z[r]-z[s]));
			a[t]=r;b[t]=s;
			t++;
		}
	}
	for(r=0;r<num*(num-1)/2-1;r++){
		for(s=num*(num-1)/2-1;s>r;s--){
			if(result[s-1]<result[s]){q1=result[s-1];result[s-1]=result[s];result[s]=q1;
				q2=a[s-1];a[s-1]=a[s];a[s]=q2;q2=b[s-1];b[s-1]=b[s];b[s]=q2;}
		}
	}
	for(r=0;r<num*(num-1)/2;r++)
	printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",x[a[r]],y[a[r]],z[a[r]],x[b[r]],y[b[r]],z[b[r]],result[r]);
}