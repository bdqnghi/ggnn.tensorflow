int main(){
	int n,i,total=0;
	int score[10],mark[10];
	float gpa;
	float avg=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>score[i];
		total+=score[i];
	}
	for(i=0;i<n;i++){
		cin>>mark[i];
		int temp=mark[i];
		if(temp<=100&&temp>=90) gpa=4.0;
		else if(temp<90&&temp>84) gpa=3.7;
		else if(temp<85&&temp>81) gpa=3.3;
		else if(temp<82&&temp>77) gpa=3.0;
		else if(temp<=77&&temp>74) gpa=2.7;
		else if(temp<=74&&temp>71) gpa=2.3;
		else if(temp<=71&&temp>67) gpa=2.0;
		else if(temp<=67&&temp>63) gpa=1.5;
		else if(temp<=63&&temp>59) gpa=1.0;
		else if(temp<60) gpa=0.0;
		avg+=gpa*score[i];
	}
	avg/=total;
	printf("%.2f\n",avg);
	//cout<<avg<<endl;
	return 0;
}