//?????????
//20101116 ??
int main()
{
	int n,pause[20],ps[20][20],sum[20],i,j;//pause[]???????ps[][]????????????sum[]??60??????
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>pause[i];                                      //??????????
			for(j=1;j<=pause[i];j++)
				cin>>ps[i][j];                          //???????????
	}
	for(i=1;i<=n;i++)
	{
		if(pause[i]==0)     sum[i]=60;                           //????????60
		for(j=1;j<=pause[i];j++)        
		{   
		    if(ps[i][pause[i]]+3*pause[i]<=60)  sum[i]=60-3*pause[i];         //????          
				else if((ps[i][j]+3*j<60)&&(ps[i][j+1]+3*j>60))
				sum[i]=60-3*j;
			else if((ps[i][j]+3*j<60)&&(ps[i][j+1]+3*j<=60)&&(ps[i][j+1]+3*j+3>=60))
				sum[i]=ps[i][j+1];
		}
	cout<<sum[i]<<endl;               //??
	}
return 0;
}
