int main()
{
int n;
cin>>n;
int i=0,j=0,k=0;
for(i=1;i<=n;i++)
{
	int shuzu[100][100]={0},sum=0;
	for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>shuzu[j][k];
	int min=99999,count=1;                      
	for(count=1;count<n;count++)
	{
		for(j=0;j<n;j++)                          //??????????"??"?min?????????
		{
			 for(k=0;k<n;k++)
			{
				if(shuzu[j][k]<=min)min=shuzu[j][k];
			 }
			 for(k=0;k<n;k++)
			{
				shuzu[j][k]=shuzu[j][k]-min;
			}
		min=99999;
		}
		for(k=0;k<n;k++)
		{
			for(j=0;j<n;j++)
			{
				if(shuzu[j][k]<=min)min=shuzu[j][k];
			}
			for(j=0;j<n;j++)
			{
				shuzu[j][k]=shuzu[j][k]-min;
			}
		min=99999;
		}
		sum=sum+shuzu[count][count];
		
		for(j=0;j<n;j++)
		{
			shuzu[j][count]=99999;
		}                                           //?????????????????????????????
		for(k=0;k<n;k++)
		{
			shuzu[count][k]=99999;
		}
		shuzu[count][count]=9999;
	}
	cout<<sum<<endl;
}
return 0;
}