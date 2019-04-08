
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int xp[12]={0},yp[12]={0};
	xp[0]=x; yp[0]=y;
	int xstp=0,ystp=0;
	int i;
	for(i=1;x>1;i++){
		x=x/2;
		xp[i]=x;
		xstp+=1;
	}
	for(i=1;y>1;i++){
		y=y/2;
		yp[i]=y;
		ystp+=1;
	}
	for(i=0;;i++){
		if(xp[0]==yp[0]){
			printf("%d",xp[0]);
			break;
		}
		if(xp[xstp-i-1]!=yp[ystp-i-1]&&xp[xstp-i]==yp[ystp-i]){
			printf("%d",xp[xstp-i]);
			break;
		}
	}
	return 0;
}
