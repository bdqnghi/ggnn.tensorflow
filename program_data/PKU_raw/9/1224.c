
int main(){
	int i,n,m,j,k;
	scanf("%d",&n);
	struct br{
		char x[10];
		int y;
	}*b,c[100],e;
	b=(struct br*)malloc(sizeof(struct br)*n);
	for(i=0;i<n;i++){
		scanf("%s%d",b[i].x,&(b[i].y));
	}
	for(i=0,m=0;i<n;i++){
		if(b[i].y>=60){
			c[m]=b[i];
			m++;
			b[i].y=-1;
		}
		for(k=0;k<m;k++){
			for(j=m-1;j>k;j--){
			   if(c[j].y>c[j-1].y){
				e=c[j];
				c[j]=c[j-1];
				c[j-1]=e;
			   }
			}
		}
	}
	for(i=0;i<m;i++){
			printf("%s\n",c[i].x);	
	}
	for(i=0;i<n;i++){
		if(b[i].y!=-1){
			printf("%s\n",b[i].x);
		}
	}
	return 0;
}