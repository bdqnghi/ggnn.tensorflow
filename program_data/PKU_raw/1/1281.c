int fenjie(int out[16],int a,int n,int m,int sheng,int b[2])
//n??out?????????m?????????????2?????????,sheng???????
{
	int i;
	for(i=m;i<=a/2;i++)
	{
		if(sheng%i==0)
		{
			out[n]=i;
			int qiu=1,k;
			for(k=0;k<=n;k++)qiu=out[k]*qiu;
			//cout<<i<<" "<<qiu<<" "<<n<<endl;
			if(qiu==a){b[0]++;break;}
			if(qiu>a)break;
			else fenjie(out,a,n+1,i,sheng/i,b);


		}
		

	}
	return 0;
}
int main()
{
	int hang=0;
	cin>>hang;
	while(hang>0)
	{
		int a;
		int b[2]={0};
		cin>>a;
		int out[16]={0};
		fenjie(out,a,0,2,a,b);
		cout<<b[0]+1<<endl;
		hang--;
	}
	return 0;
}
