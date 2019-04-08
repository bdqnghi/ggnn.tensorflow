int main()
{
	int n,i;
	cin>>n;
	int ans[1000]={0};
	if(n==0)cout<<"1";
	else if(n==1)cout<<"2";
	else{

	ans[0]=2;
	for(i=1;i<n;i++){
		for(int j=0;j<1000;j++)
			if(ans[j]==0 && ans[j+1]==0 && ans[j+2]==0){   //???0-(j-1)
				for(int k=0;k<=j-1;k++){
					if(ans[k]>9)
					   {ans[k+1]++;ans[k]=ans[k]%10;}
				}
				break;
			}
			else
			  {ans[j]=ans[j]+ans[j];}
	}

	int len;
	for(int j=0;j<1000;j++)
		if(ans[j]==0 && ans[j+1]==0 && ans[j+2]==0)
		  {len=j-1;break;}

	for(i=len;i>=0;i--)
		cout<<ans[i];
	}
	
	return 0;
}