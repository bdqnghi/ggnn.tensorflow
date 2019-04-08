int main(){
	int num;
	cin>>num;
	struct {
		int No;
		int Chinese;
		int Math;
		int Sum;  //??
	}student[100000],t;  //??????
	int i,j;
	for(i=0;i<num;i++){
		cin>>student[i].No>>student[i].Chinese>>student[i].Math;
	    student[i].Sum=student[i].Math+student[i].Chinese;
	}
	for(i=0;i<3;i++)  //????
		for(j=0;j<num-1-i;j++){
			if(student[j].Sum>=student[j+1].Sum){
				t=student[j];
				student[j]=student[j+1];
				student[j+1]=t;
			}
		}
	for(i=0;i<3;i++)
		cout<<student[num-i-1].No<<" "<<student[num-i-1].Sum<<endl;  //?????
	return 0;
}