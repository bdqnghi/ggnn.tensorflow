double jl(int ma,int mb,int mc,int md,int me,int mf);
int main(){
	int a[max],b[max];
	int i,k,n,j,h;
	double t,s[max];
	struct dian{
		int x,y,z;
	}d[max];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&(d[i].x),&(d[i].y),&(d[i].z));
	}
	for(k=0,j=0;j<n;j++){
		for(i=j+1;i<n;i++,k++){
		    s[k]=jl(d[i].x,d[i].y,d[i].z,d[j].x,d[j].y,d[j].z);
			a[k]=i;
			b[k]=j;
			}
	}
	for(k=1;k<=n*(n-1)/2;k++){
		for(i=0;i<n*(n-1)/2-k;i++){
			if(s[i+1]>s[i]){
				t=s[i+1];
				s[i+1]=s[i];
				h=a[i];
				a[i]=a[i+1];
				a[i+1]=h;
				s[i]=t;
				j=b[i];
				b[i]=b[i+1];
				b[i+1]=j;


			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",d[b[i]].x,d[b[i]].y,d[b[i]].z,d[a[i]].x,d[a[i]].y,d[a[i]].z,s[i]);
	}
	return 0;
}




double jl(int ma,int mb,int mc,int md,int me,int mf){
	double l;
	l=sqrt((double)(ma-md)*(ma-md)+(mb-me)*(mb-me)+(mc-mf)*(mc-mf));
	return l;
}
			
