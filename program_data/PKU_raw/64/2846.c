int main(){
	int n;
	struct point{
		int x,y,z,i;
	}points[10];
		struct jieguo{
		struct point pointqian;
		struct point pointhou;
		double juliss;
	}e,jieguos[45];
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&points[i].x,&points[i].y,&points[i].z);
	}
	int m=0,k=0;
	i=0;
	for(m=0;m<n;m++){
		for(k=m+1;k<n;k++){
			jieguos[i].pointqian=points[m];
			jieguos[i].pointhou=points[k];
            jieguos[i].juliss=sqrt((jieguos[i].pointqian.x-jieguos[i].pointhou.x)*(jieguos[i].pointqian.x-jieguos[i].pointhou.x)+(jieguos[i].pointqian.y-jieguos[i].pointhou.y)*(jieguos[i].pointqian.y-jieguos[i].pointhou.y)+(jieguos[i].pointqian.z-jieguos[i].pointhou.z)*(jieguos[i].pointqian.z-jieguos[i].pointhou.z));
			i++;
		}
	}
	for(k=1;k<(n*(n-1)/2);k++){
		for(i=0;i<(n*(n-1)/2)-k;i++){
			if(jieguos[i].juliss<jieguos[i+1].juliss){
				e=jieguos[i+1];
				jieguos[i+1]=jieguos[i];
				jieguos[i]=e;
			}
		}
	}
	for(i=0;i<(n*(n-1)/2);i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",jieguos[i].pointqian.x,jieguos[i].pointqian.y,jieguos[i].pointqian.z,jieguos[i].pointhou.x,jieguos[i].pointhou.y,jieguos[i].pointhou.z,jieguos[i].juliss);
	}
	return 0;
}