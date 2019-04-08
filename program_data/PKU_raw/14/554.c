int main(){
	int n,i,max1=0,num1=0,max2=0,num2=0,max3=0,num3=0;
	struct stu{
		int num;
		int chn;
		int mat;
		int sum;
	}sco[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>sco[i].num>>sco[i].chn>>sco[i].mat;
		sco[i].sum=sco[i].chn+sco[i].mat;
	}
	for(i=0;i<n;i++){
		if(sco[i].sum>max1){
			max3=max2;
			num3=num2;
			max2=max1;
			num2=num1;
			max1=sco[i].sum;
			num1=i;

		}
		else{
			if(sco[i].sum>max2){
						max3=max2;
						num3=num2;
						max2=sco[i].sum;
						num2=i;
						}
			else {
				if(sco[i].sum>max3){
							max3=sco[i].sum;
							num3=i;
						}
			}
	}
	}
		cout<<num1+1<<' '<<max1<<endl;
		cout<<num2+1<<' '<<max2<<endl;
		cout<<num3+1<<' '<<max3<<endl;
	return 0;
}
