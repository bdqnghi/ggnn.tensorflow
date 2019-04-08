int main()
{
	int n,i,k,j=0,m,f,g;
	scanf("%d",&n);
	int s[10][3],b[50][3],d[50][3];
	double c[50],r,e;
	for(i=0;i<n;i++){
		for(k=0;k<3;k++){
			scanf("%d",&s[i][k]);
		}
	}
	for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){
			r=sqrt((s[i][0]-s[k][0])*(s[i][0]-s[k][0])+(s[i][1]-s[k][1])*(s[i][1]-s[k][1])+(s[i][2]-s[k][2])*(s[i][2]-s[k][2]));
			b[j][0]=s[i][0];
			b[j][1]=s[i][1];
			b[j][2]=s[i][2];
			d[j][0]=s[k][0];
			d[j][1]=s[k][1];
			d[j][2]=s[k][2];
			c[j]=r;
			j++;
		}
	}
	for(i=1;i<n*(n-1)/2;i++){
		for(k=0;k<n*(n-1)/2-i;k++){
			if(c[k]<c[k+1]){
				e=c[k+1];
				c[k+1]=c[k];
				c[k]=e;
				for(m=0;m<3;m++){
					f=b[k+1][m];
					b[k+1][m]=b[k][m];
					b[k][m]=f;
					g=d[k+1][m];
					d[k+1][m]=d[k][m];
					d[k][m]=g;
				}
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i][0],b[i][1],b[i][2],d[i][0],d[i][1],d[i][2],c[i]);
	}
	return 0;
}
