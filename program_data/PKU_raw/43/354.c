int main()
{
int m,i,j,k,odd1,odd2,sum1,sum2;//m:?????;i,j,k:????;odd1,odd2:??????????odd1<odd2;sum1,sum2:??????????????????
cin>>m;
for(i=3;i<=m/2;i+=2)
{
	sum1=0;
	sum2=0;
	odd1=i;
	odd2=m-odd1;
	for(j=2;j<odd1;j++)
		if(odd1%j==0)
			sum1+=1;
	for(k=2;k<odd2;k++)
		if(odd2%k==0)
			sum2+=1;
	if(sum1==0&&sum2==0)
		cout<<odd1<<' '<<odd2<<endl;

}
return 0;
}
