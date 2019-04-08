int main()
{
	double str[200][2],dis,max=0;//??????????
	int n,a=0;
	cin>>n;//??????
	for(int i=0;i<n;i++) cin>>str[i][0]>>str[i][1];//????
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		{
			dis=sqrt( pow(str[i][0]-str[j][0],2) + pow(str[i][1]-str[j][1],2) );
			if(max<dis){
				max=dis;//?????
			}
		}
	}
	printf("%.4f\n",max);//??
	return 0;
}
	