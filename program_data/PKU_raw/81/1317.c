
int panduan(int x,int y){
	if(x>=0&&x<5&&y>=0&&y<5)
		return 1;
	else
		return 0;
}

int main(){
     int i,j,m,n,t,pd=0,a[5][5];
	 for(i=0;i<5;i++){
		 for(j=0;j<5;j++){
			 scanf("%d",&a[i][j]);
		 }
	 }
	 scanf("%d%d",&m,&n);
     pd=panduan(m,n);
	 if(pd==0)
		 printf("error\n");
	 else{
		 for(j=0;j<5;j++){
			 t=a[m][j];
			 a[m][j]=a[n][j];
			 a[n][j]=t;
		 }
	    for(i=0;i<5;i++){
		 for(j=0;j<5;j++){
			 if(j!=4)
			 printf("%d ",a[i][j]);
			 if(j==4)
				 printf("%d\n",a[i][j]);
		 }
	 }
	 }
	 return 0;

}
