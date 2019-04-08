int main(){
int zb[100][3],a,n,j,k,i;
double b,jl[100],t;
scanf("%d",&n);
for( i=0;i<n;i++){
	for(k=0;k<3;k++){
scanf("%d",&zb[i][k]);
	}
}
for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
	
jl[10*i+j]=0;
}
}


for(i=0;i<n;i++){ 
	for(j=i+1;j<n;j++){
		
	
		a=((zb[i][0]-zb[j][0])*(zb[i][0]-zb[j][0]))+((zb[i][1]-zb[j][1])*(zb[i][1]-zb[j][1]))+((zb[i][2]-zb[j][2])*(zb[i][2]-zb[j][2]));

		jl[10*i+j]=sqrt(a);
		}
}
while(1){
	t=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(jl[10*i+j]>t){
				t=jl[10*i+j];
			}
		}
	}
	if(t==0){
		break;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(jl[10*i+j]==t){
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",zb[i][0],zb[i][1],zb[i][2],zb[j][0],zb[j][1],zb[j][2],t);
				jl[10*i+j]=0;
			}
		}
	}
	}
	return 0;
}
