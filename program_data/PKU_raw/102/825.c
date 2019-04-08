/*
 * ????first.cpp
 * ???00948343_??
 * ?????2012/9/16
 * ?????1???100?????????
 */



int main(){
	int n, i, j;
	cin >> n;
	float male[n], female[n], height;
	int count_male=0, count_female=0;
	char gender[8];
	for (i=0;i<n;i++){
		cin >> gender >> height;
		if (strcmp(gender,"male")==0){
			male[count_male]=height;
			count_male++;
		}
		else{
			female[count_female]=height;
			count_female++;
		}
	}
	float temp;
	for (i=0;i<count_male-1;i++){
		for (j=0;j<count_male-1-i;j++){
			if (male[j]>male[j+1]){
				temp=male[j];
				male[j]=male[j+1];
				male[j+1]=temp;
			}
		}
	}
	for (i=0;i<count_female-1;i++){
		for (j=0;j<count_female-i-1;j++){
			if (female[j]<female[j+1]){
				temp=female[j];
				female[j]=female[j+1];
				female[j+1]=temp;
			}
		}
	}
	for (i=0;i<count_male;i++){
		cout << fixed << setprecision(2)<< male[i] << ' ';
	}
	for (i=0;i<count_female;i++){
		cout << fixed << setprecision(2) << female[i];
		if (i!=count_female-1)
			cout << ' ';
	}
	return 0;
}
