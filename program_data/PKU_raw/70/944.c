int main()
{
double dian[10][2],cha,temp=0;
int n,i,j;
cin>>n;
for(i=0;i<=n-1;){
	cin>>dian[i][0]>>dian[i][1];
	i++;
}
for(i=0;i<=n-1;i++){
	for(j=0;j<=n-1;j++){
		cha=sqrt((dian[i][0]-dian[j][0])*(dian[i][0]-dian[j][0])+(dian[i][1]-dian[j][1])*(dian[i][1]-dian[j][1]));
		if(cha>=temp)temp=cha;
	}
}
cout<<temp<<endl;
return 0;
}