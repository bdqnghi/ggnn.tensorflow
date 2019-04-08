int main(){
 int a,b,c,x,y,z,sz[10000],m=0,i;
scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
while(a!=0||b!=0||c!=0&&x!=0||y!=0||z!=0){
sz[m]=3600*(x+12-a)+60*(y-b)+(z-c);
m++;
scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
 }
for(i=0;i<m;i++){
printf("%d\n",sz[i]);
}
 
	return 0;
}
