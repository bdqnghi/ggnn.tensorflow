int main()
{
	int n,i,j=0,k,r,g,o,l;
	int x[100],y[100],z[100];
	int q[100],w[100];
	double s[450],e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			s[j]=1.0*pow((x[k]-x[i]),2)+pow((y[k]-y[i]),2)+pow((z[k]-z[i]),2);
			s[j]=sqrt(s[j]);
			q[j]=k;
			w[j]=i;
			j++;
		}
	}
	for(g=1;g<=j;g++){
		for(r=0;r<j-g;r++){
			if(s[r]<s[r+1]){
				e=s[r+1];
				s[r+1]=s[r];
				s[r]=e;
				o=q[r+1];
				q[r+1]=q[r];
				q[r]=o;
				l=w[r+1];
				w[r+1]=w[r];
				w[r]=l;
			}
		}
	}
	for(r=0;r<=j-1;r++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[q[r]],y[q[r]],z[q[r]],x[w[r]],y[w[r]],z[w[r]],s[r]);
	}
	return 0;
}