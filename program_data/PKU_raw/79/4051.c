

int main(int argc, char* argv[])
{
	int m,n,k,i,turn,baoshu,ing,p;
	long begin,end;
	
	int monkey[300];
	int king[2];
	while(1){
	scanf("%d%d",&n,&m);//??n?m
	if(n!=0){
		for(i=0;i<n;i++){
	monkey[i]=i+1;}//????????monkey[300]???
		if(m==1){
		printf("%d\n",n);}
		else{
		for(i=0,k=0;i<n;i++){
			if((i+1)%m!=0){
		monkey[k]=i+1;
		k++;}}
		king[0]=0;
		king[1]=k;//?????????k?
	
		for(turn=2,begin=n+1,ing=0;ing!=1;turn++){//??????
			if(turn==2){
				end=begin+king[1];}//????????n+1??????n+k?
			else{
			begin=end;
			end=begin+ing;}
		for(baoshu=begin,ing=0;baoshu<end;baoshu++){
			if(baoshu%m!=0){
				p=baoshu-begin;
	    monkey[ing]=monkey[p];
		ing++;}}}//ing?????????????
		printf("%d\n",monkey[0]);}}
		
	else{
		break;}}
	return 0;}
