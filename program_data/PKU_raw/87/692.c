int main()
{
	int h1,h2,f1,f2,m1,m2;
	int r=0;
	while(1){
	scanf("%d%d%d%d%d%d",&h1,&f1,&m1,&h2,&f2,&m2);
		if(h1!=0||h2!=0||f1!=0||f2!=0||m1!=0||m2!=0){
		h2+=12;
		r+=((h2-h1-1)*3600);
		r=r+(3600-f1*60-m1);
		r=r+f2*60+m2;
		printf("%d\n",r);
		r=0;
		}else{
		break;
		}
	}
	return 0;
}