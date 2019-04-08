
int main(){
    int n,i,j,x,e,k;
    int sz[10][3]={0};
    double l[45][3];
	double t;
	int d;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	for(x=0,i=0;i<n-1;i++){
		for(e=i+1;e<n;e++,x++){
		l[x][0]=sqrt(pow(sz[i][0]*1.0-sz[e][0]*1.0,2)+
			         pow(sz[i][1]*1.0-sz[e][1]*1.0,2)+
				     pow(sz[i][2]*1.0-sz[e][2]*1.0,2));//????
		l[x][1]=i;//????????
		l[x][2]=e;
		}
	}

   for( k = 1 ; k <= (n-1)*n/2 ; k++){
	  for( i = 0; i < (n-1)*n/2 - k; i++){
		 if(l[i][0] < l[i+1][0]){
					t = l[i+1][0];                 //exchange lenth
					l[i+1][0] = l[i][0];
					l[i][0] = t;

					d= l[i+1][1];                 //exchange point 1
					l[i+1][1] = l[i][1];
					l[i][1] = d;

					d = l[i+1][2];                 //exchange point 2
					l[i+1][2] = l[i][2];
					l[i][2] = d;

		}
	  }
   }


	for(e=0;e<(n-1)*n/2;e++){
		i=l[e][1];
		j=l[e][2];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sz[i][0],sz[i][1],sz[i][2],
											 sz[j][0],sz[j][1],sz[j][2],
											 l[e][0]);
	}
	return 0;
}