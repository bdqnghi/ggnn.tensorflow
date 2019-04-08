int main()
{
int n;
double in[400];
double cha[400]={0};
int i,j,k,s=0;
double temp=0;
int flag[400]={0};
double to=0,aver;
cin>>n;
for(i=0;i<=n-1;i++){
	cin>>in[i];
	to=to+in[i];
}
aver=to/n;
//cout<<aver<<endl;
for(i=0;i<=n-1;i++){
	cha[i]=fabs(in[i]-aver);
//	cout<<cha[i]<<endl;
}
for(i=0;i<=n-1;i++){
	if(temp<cha[i]){
		temp=cha[i];
	}
}
//cout<<temp;
for(i=0;i<=n-1;i++){
	if(fabs(cha[i]-temp)<=0.00000001){
		flag[s]=i;
		s++;
	}
}
for(i=0;i<=s-2;i++){
	cout<<in[flag[i]]<<",";
}
cout<<in[flag[s-1]]<<endl;
return 0;
}