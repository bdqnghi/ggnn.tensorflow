

int main(int argc, char* argv[])
{   int a[8][8],i,j,max[8]={0},k,h,l;
    scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>max[i]){
				max[i]=a[i][j];
			}
		}
	}
    for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			if(a[i][j]==max[i]){
				for(k=0;k<h;k++){
					if(max[i]>a[k][j]){
						break;
					}
					else{
						continue;
					}
				}
				if(k==h){
					printf("%d+%d",i,j);
				}
				else{
					max[i]=0; break;
				}
			}
		}
	}
	if(max[0]+max[1]+max[2]+max[3]+max[4]+max[5]+max[6]+max[7]==0){
	printf("No");
	}
	return 0;
}
