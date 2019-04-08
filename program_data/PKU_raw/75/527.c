int main(){
	int i,j,number=1,time[1000],high=0;
	//time??????????number????high???????????
	char p[2][4000];
	cin.getline(p[0],4000);
	cin.getline(p[1],4000);
	for(i=0;i<1000;i++)time[i]=0;
	if(p[0][0]==0)number=0;
	for(i=0;p[0][i]!=0;i++)
		if(p[0][i]==',')number++;
	const int n=number;
	int come[n],leave[n];//come????????leave????????
	j=0;
	come[0]=0;
	for(i=0;p[0][i]!=0;i++){
		if(p[0][i]==','){
			j++;
			come[j]=0;
		}
		else come[j]=come[j]*10+p[0][i]-'0';
	}
	j=0;
	leave[0]=0;
	for(i=0;p[1][i]!=0;i++){
		if(p[1][i]==','){
			j++;
			leave[j]=0;
		}
		else leave[j]=leave[j]*10+p[1][i]-'0';
	}
	for(i=0;i<number;i++)
		for(j=come[i];j<leave[i];j++)time[j]++;
	for(i=0;i<1000;i++)
		if(time[i]>high)high=time[i];
	cout<<number<<' '<<high<<endl;
	return 0;
}