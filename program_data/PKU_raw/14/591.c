	struct student{
	int ID;
	int yw;
	int sx;
	} stu[100000];//??????
int main(){
	int num,i,j,sum[100000],t,m;
	cin>>num;
	for(i=1;i<=num;i++){
		cin>>stu[i].ID>>stu[i].yw>>stu[i].sx;
	sum[i]=stu[i].yw+stu[i].sx;
}//?????????
for(i=1;i<4;i++){
	for(j=num;j>1;j--){
		if(sum[j]>sum[j-1]){
			t=sum[j-1];m=stu[j-1].ID;
			sum[j-1]=sum[j];stu[j-1].ID=stu[j].ID;
			sum[j]=t;stu[j].ID=m;
		}
	}
}//????
for(i=1;i<4;i++){
	cout<<stu[i].ID<<' '<<sum[i]<<endl;}
return 0;
}//????
