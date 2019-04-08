int main()
{   int sz[5][5],mn[5];
    int n,m,i,j,a;
    int panduan(int sz[5][5], int x,int y);
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    scanf("%d",&sz[i][j]);
	} 
	}
    scanf("%d %d",&n,&m);
    a=panduan(sz,n,m);
    if(a==0){
    printf("error");
	}else if(a==1){
   for(i=0;i<5;i++){
     for(j=0;j<4;j++){
       printf("%d ",sz[i][j]);
	 }
       printf("%d\n",sz[i][4]);
   }
 }
return 0;
}
int panduan(int sz[5][5], int x,int y)
{   int a,mn[5],i,n;
 if(0<=x&&x<5&&0<=y&&y<5){
    a=1;
    for(i=0;i<5;i++){
      mn[i]=sz[x][i];
	}
    for(i=0;i<5;i++){
      sz[x][i]=sz[y][i];
	}
    for(i=0;i<5;i++){
      sz[y][i]=mn[i];
	}
 }else{
    a=0;
 }
 return a;
}
