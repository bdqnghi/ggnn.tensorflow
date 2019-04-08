int n,m,t,cnt;
void f(int x,int left,int last){
	//9("%d %d %d\n",x,left,last);
	if(x>n) {if(left==0) cnt++;return;}
	for (int i=last;i<=left/(n-x+1);i++) f(x+1,left-i,i);
}
int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d%d",&m,&n);
		cnt=0;f(1,m,0);
		printf("%d\n",cnt);
	}
	return 0;
}
