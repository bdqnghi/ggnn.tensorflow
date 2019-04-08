


int main ()
{
	char in[110]={0};
	cin>>in;
	int num[110]={0},ans[110]={0};
	int lenth = strlen(in);
	for (int i=0;i<lenth;i++)
		num[i]=in[i]-'0';
	int r = num[0];
	for (int i=1;i<lenth;i++){
		ans[i] = (r * 10 + num[i]) / 13;
		r = (r * 10 + num[i]) % 13;
	}
	int s = 0;
	for (int i=0;i<lenth;i++){
		if (ans[i] != 0) {s = i;break;}
	}
	if (lenth<=2 && num[1]+num[0]*10<13){
		cout<<'0'<<endl<<r;
	}
	else {
	for (int i=s;i<lenth;i++)
		cout<<ans[i];
	cout<<endl<<r;
	}
	
	return 0;
}