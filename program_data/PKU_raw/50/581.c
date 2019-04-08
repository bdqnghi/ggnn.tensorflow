
int main()
{
	int n,i,a,y,x;
	int thirteen[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	cin>>n;
	for (i=0;i<12;i++){
		y = thirteen[i]%7;
		a = 8-y;
		x = n-a;
		if (x==5||x==-2){
			cout<<i+1<<endl;
		}
	}
	return 0;
}


		





