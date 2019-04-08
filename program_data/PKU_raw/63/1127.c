int main(int argc, char* argv[])
{
 int x1,y1,x2,y2,a[101][101],b[101][101],c[101][101];
 scanf("%d%d",&x1,&y1);
 int i,j;
 for(i=0;i<x1;i++){
	 for(j=0;j<y1;j++){
	 scanf("%d",&a[i][j]);
	 }
 }
 scanf("%d%d",&x2,&y2);
 for(i=0;i<x2;i++){
	 for(j=0;j<y2;j++){
 scanf("%d",&b[i][j]);
 }}
 for(i=0;i<x1;i++){
	 for(j=0;j<y2;j++){
 c[i][j]=0;}}
 int k;
 for(i=0;i<x1;i++){
	 for(j=0;j<y2;j++){
		 for(k=0;k<x2;k++){
			 c[i][j]+=a[i][k]*b[k][j];
		 }
	 }
 }
 for(i=0;i<x1;i++){
	 for(j=0;j<y2-1;j++){
		 printf("%d ",c[i][j]);}
	 printf("%d\n",c[i][j]);}
	return 0;
}

