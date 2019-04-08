

int main(){   int n,i,j,t,t2,t3;
	double t1;
	int zb[10][3];
	double d[60];
	int flag[60][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&zb[i][j]);
		}
	}
	t=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			d[t]=sqrt(1.0*((zb[i][0]-zb[j][0])*(zb[i][0]-zb[j][0])+(zb[i][1]-zb[j][1])*(zb[i][1]-zb[j][1])+(zb[i][2]-zb[j][2])*(zb[i][2]-zb[j][2])));
			flag[t][0]=i;
			flag[t][1]=j;
			t++;
		}
	}
	for(j=0;j<t-1;j++){
		for(i=0;i<t-j-1;i++){
			if(d[i]<d[i+1]){
				t1=d[i];
				d[i]=d[i+1];
				d[i+1]=t1;
				t2=flag[i][0];
				flag[i][0]=flag[i+1][0];
				flag[i+1][0]=t2;
				t3=flag[i][1];
				flag[i][1]=flag[i+1][1];
				flag[i+1][1]=t3;
			}
		}
	}
	for(i=0;i<t;i++){
		printf("(%d,%d,%d)",zb[flag[i][0]][0],zb[flag[i][0]][1],zb[flag[i][0]][2]);
		printf("-");
		printf("(%d,%d,%d)",zb[flag[i][1]][0],zb[flag[i][1]][1],zb[flag[i][1]][2]);
		printf("=%.2f",d[i]);
		printf("\n");
	}
	return 0;
}
