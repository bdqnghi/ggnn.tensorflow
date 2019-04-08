int main(){
	int nu;
	scanf("%d\n",&nu);
	struct aaa{
		int x,y;
	}time[100];
	int i;
	int h=0;
	int m=0;
	int s=0;
	for(i=0;i<nu;i++){
		scanf("%d%d",&(time[i].x),&(time[i].y));
	}
	for(i=0;i<nu;i++){
		if((time[i].x)<=140&&(time[i].x)>=90&&(time[i].y)<=90&&(time[i].y)>=60){
			h+=1;
			s=h;
		}else if(m<=h){
			m=h;
			h=0;
			continue;
		}else if(m>=h){
			h=0;
			continue;
		}
	}
	if(s>=m){
		printf("%d",s);
	}else{
        printf("%d\n",m);}
		return 0;
}