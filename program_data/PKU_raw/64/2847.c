int main(){
	struct dian{
		int x,y,z;
	}dians[45];
	struct suoyou{
		struct dian qian;
		struct dian hou;
		double ji;
	}suoyous[45],e;
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&dians[i].x,&dians[i].y,&dians[i].z);
	}
	int k,l=0;
	for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){
			suoyous[l].qian=dians[i];
			suoyous[l].hou=dians[k];
			suoyous[l].ji=sqrt((dians[i].x-dians[k].x)*(dians[i].x-dians[k].x)+(dians[i].y-dians[k].y)*(dians[i].y-dians[k].y)+(dians[i].z-dians[k].z)*(dians[i].z-dians[k].z));
			l++;
		}
	}
	for(i=1;i<=n*(n-1)/2;i++){
		for(k=0;k<n*(n-1)/2-i;k++){
			if(suoyous[k].ji<suoyous[k+1].ji){
				e=suoyous[k];
				suoyous[k]=suoyous[k+1];
				suoyous[k+1]=e;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",suoyous[i].qian.x,suoyous[i].qian.y,suoyous[i].qian.z,suoyous[i].hou.x,suoyous[i].hou.y,suoyous[i].hou.z,suoyous[i].ji);
	}
	return 0;
}