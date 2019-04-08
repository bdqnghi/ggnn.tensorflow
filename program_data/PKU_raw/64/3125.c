int main(){
	int a[10][4],m[45][4],n[45][4],i=0,j=0,k=0,p,q,w;
	double b[10][10],c[45];
	scanf("%d",&w);
	for(i=0;i<w;i++){
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
	}
	for(i=0;i<w;i++){
		for(j=i+1;j<w;j++){
			b[i][j]=(double)sqrt((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])+(a[i][3]-a[j][3])*(a[i][3]-a[j][3]));
		}
	}
	for(k=0;k<w*(w-1)/2;k++){
		c[k]=b[0][1];
		p=0;
		q=1;
		for(i=0;i<w-1;i++){
			for(j=i+1;j<w;j++){
				if(c[k]<b[i][j]){
					c[k]=b[i][j];
					p=i;
					q=j;
				}
			}	
		}
		b[p][q]=-1;
		m[k][1]=a[p][1];m[k][2]=a[p][2];m[k][3]=a[p][3];
		n[k][1]=a[q][1];n[k][2]=a[q][2];n[k][3]=a[q][3];
	}
	for(k=0;k<w*(w-1)/2;k++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",m[k][1],m[k][2],m[k][3],n[k][1],n[k][2],n[k][3],c[k]);
	}
return 0;
}