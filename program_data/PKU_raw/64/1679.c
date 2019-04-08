int main()
{
	int n,i,j,k;
	int x,y;
	int a[10][3];
	double b[45][3],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	for(i=0,k=0;i<n;i++)
		for(j=i+1;j<n;j++){
			b[k][0]=i;
			b[k][1]=j;
			b[k][2]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
			k++;
		}
	for(i=1;i<k;i++)
		for(j=0;j<k-i;j++){
			if(b[j][2]<b[j+1][2]){
				temp=b[j][0];b[j][0]=b[j+1][0];b[j+1][0]=temp;
				temp=b[j][1];b[j][1]=b[j+1][1];b[j+1][1]=temp;
				temp=b[j][2];b[j][2]=b[j+1][2];b[j+1][2]=temp;
			}
			if(b[j][2]==b[j+1][2]){
				if(b[j][0]>b[j+1][0]){
					temp=b[j][0];b[j][0]=b[j+1][0];b[j+1][0]=temp;
					temp=b[j][1];b[j][1]=b[j+1][1];b[j+1][1]=temp;
					temp=b[j][2];b[j][2]=b[j+1][2];b[j+1][2]=temp;
				}
				if(b[j][0]==b[j+1][0])
					if(b[j][1]>b[j+1][1]){
						temp=b[j][0];b[j][0]=b[j+1][0];b[j+1][0]=temp;
					    temp=b[j][1];b[j][1]=b[j+1][1];b[j+1][1]=temp;
					    temp=b[j][2];b[j][2]=b[j+1][2];b[j+1][2]=temp;
					}
			}
		}
	for(i=0;i<k;i++){
		x=b[i][0];y=b[i][1];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[x][0],a[x][1],a[x][2],a[y][0],a[y][1],a[y][2],b[i][2]);
	}
    return 0;
}