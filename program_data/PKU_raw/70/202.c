int main(int argc, char* argv[])
{   
	int n,i,k,p,q,t,m;
    double sta[10][2],dis[45],s,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<2;k++){
			scanf("%lf",&sta[i][k]);
		}
	}
	m=0;
    for(p=0;p<=n-1;p++){
		for(t=p+1;t<=n-1;t++){
		    x=sta[p][0]-sta[t][0];
		    y=sta[p][1]-sta[t][1];
		    dis[m]=sqrt(pow(x,2)+pow(y,2));
			m=m+1;
		}
	}
	for(q=0;q<m-1;q++){
		if(dis[q]>dis[q+1]){
			s=dis[q+1];
			dis[q+1]=dis[q];
			dis[q]=s;
		}
	}
	printf("%.4f",dis[m-1]);
	return 0;
}