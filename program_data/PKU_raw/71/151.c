int f(int nian,int yue ,int ri){
	int z=0,i;
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(nian%400==0||(nian%4==0&&nian%100!=0)){
		d[1]=29;
	}
	for(i=0;i<yue-1;i++){
		z=z+d[i];
	}
	z=z+ri;
	return(z);
}
int main(int argc, char* argv[])
{	int nian,yue1,yue2;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d%d%d",&nian,&yue1,&yue2);
	if((int)(fabs(f(nian,yue1,1)-f(nian,yue2,1)))%7==0)printf("YES\n");
	else printf("NO\n");
	}
	
	return 0;
}


