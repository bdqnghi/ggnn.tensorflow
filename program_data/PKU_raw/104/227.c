int jd(int m,int x)
{
	if(m==0)return x;
    if(x==1)return 1;
	else return jd(m-1,x/2);
}
int main()
{
	int a,b;
	cin>>a>>b;
	int n=0;
	for(int i=0;i<=a;i++){
		if(n==1)break;
		for(int k=0;k<b;k++){
			if(jd(i,a)==jd(k,b)){cout<<jd(i,a)<<endl;
			    n=1;
			    break;}

		}}
return 0;
}