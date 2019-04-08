
int main(){

	int num;
	scanf("%d",&num);
	int m100,m50,m20,m10,m5,m1,sz[50];

	m100=num/100;
	sz[0]=num%100;
	m50=sz[0]/50;
	sz[1]=sz[0]%50;
	m20=sz[1]/20;
	sz[2]=sz[1]%20;
	m10=sz[2]/10;
	sz[3]=sz[2]%10;
	m5=sz[3]/5;
	sz[4]=sz[3]%5;
	m1=sz[4];
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",m100,m50,m20,m10,m5,m1);
	return 0;
}