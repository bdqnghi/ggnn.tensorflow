int m1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int m2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	int year[2],month[2],day[2],i,j;
	for(i=0;i<2;i++){
		cin>>year[i]>>month[i]>>day[i];
	}
	for(i=0;i<2;i++){
		for(j=1;j<month[i];j++){
			if(year[i]%4!=0||(year[i]%100==0&&year[i]%400!=0)){
				day[i]+=m1[j];
			}
			else day[i]+=m2[j];
		}
	}
	for(i=year[1];i>year[0];i--){
		if((i-1)%4!=0||((i-1)%100==0&&(i-1)%400!=0))
			day[1]+=365;
		else
			day[1]+=366;
	}
	cout<<day[1]-day[0]<<endl;
	return 0;
}