int main(){
	int sz[8][8];
	int a,b;
	int i,j;
	int k[8],l[8];
	int I=-1;
	int J=-1;
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		scanf("%d",&sz[j][i]);
		}
	}
	for(i=0;i<b;i++){
	k[i]=sz[i][0];
	}
	for(i=0;i<a;i++){
	l[i]=sz[0][i];
	}
		for(i=0;i<b;i++){
			for(j=0;j<a;j++){
				if(k[i]>sz[i][j]){
				k[i]=sz[i][j];
				}
			}
		}

		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(l[i]<sz[j][i]){
				l[i]=sz[j][i];
				}
			}
		}
for(i=0;i<b;i++){
	for(j=0;j<a;j++){
if(	k[i]==l[j]){
	I=i;
J=j;
printf("%d+%d",J,I);
	}
}
}
if(I==-1&&J==-1){
printf("No");
}
return 0;
}