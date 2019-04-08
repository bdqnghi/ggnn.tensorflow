int main()
{
int in[1000],out[1000],flag[1000]={0},t;
int i,j,k;
int num=0;
char temp;
for(i=0;;i++){
	cin>>in[i];
	temp=cin.get();
	num++;
	if(temp=='\n')break;
}
for(i=0;;i++){
	cin>>out[i];
	temp=cin.get();
	if(temp=='\n')break;
}
for(i=1;i<=999;i++){
	for(j=0;j<=num-1;j++){
		if(in[j]<=i&&out[j]>i){
			flag[i]=flag[i]+1;
		}
	}
}
int tem=0;
for(i=1;i<=999;i++){
	if(tem<=flag[i]){
		tem=flag[i];
	}
}
	cout<<num<<" "<<tem<<endl;

return 0;
}