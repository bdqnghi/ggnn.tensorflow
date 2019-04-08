int main(){
int a,b,i,j,k,m,n,p;
p=0;
scanf("%d,%d",&a,&b);
int c[10][10];
for (i=0;i<a;i++){
	for(j=0;j<b;j++){
		scanf("%d",&(c[i][j]));
	}
}
for (i=0;i<a;i++){
	for(j=0;j<b;j++){
		for(k=0;k<b;k++){
			if(c[i][j]<c[i][k]){
				break;
			}if(k==(b-1)||(j==(b-1)&&k==(b-2))){n=1;}
	}
			if(n==1){
			for(m=0;m<a;m++){
			if(c[i][j]>c[m][j]){
				n=0;
				break;
				}if(m==(a-1)||(i==(a-1)&&m==(a-2))){
						printf("%d+%d\n",i,j);
								n=0;
								p=1;
					        	break;
							}
					}
				}
}			}
if(p==0){
	printf("No");}
return 0;
}
