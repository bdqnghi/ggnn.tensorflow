int main(int argc, char* argv[])
{
	int n,sum=0,i,mon=0,max=0;
	char name[20],c1,c2,maxname[20];
	int m1,m2,m3;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",name,&m1,&m2,&c1,&c2,&m3);
		mon=0;
		if(m1>80&&m3>0)
			mon+=8000;
		if(m1>85&&m2>80)
			mon+=4000;
		if(m1>90)
			mon+=2000;
		if('Y'==c2&&m1>85)
			mon+=1000;
		if('Y'==c1&&m2>80){
			mon+=850;}
	sum+=mon;
	if(mon>max){
	max=mon;
	strcpy(maxname,name);}}
	printf("%s\n%d\n%d\n",maxname,max,sum);
	return 0;
}