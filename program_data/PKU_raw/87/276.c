int main()
{
   int sz[1000][7],i,j,s=0,w,e,q;
   for(i=0;i<1000;i++){
   for(j=0;j<6;j++){
	   scanf("%d",&sz[i][j]);}
   if(sz[i][1]==0&&sz[i][2]==0&&sz[i][3]==0&&sz[i][4]==0&&sz[i][5]==0&&sz[i][0]==0){break;}else{s++;}}
   for(i=0;i<s;i++){
   for(j=0;j<6;j++){
     e=sz[i][0]*3600+sz[i][1]*60+sz[i][2];
     w=(sz[i][3]+12)*3600+sz[i][4]*60+sz[i][5];
     q=w-e;}
    printf("%d\n",q);
     e=0; w=0; q=0;}
    return 0;
}
