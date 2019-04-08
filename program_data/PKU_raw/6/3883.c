

int main()
{
	int k,m,n,num[100][100],count1,count2,count3,sum;
	int *pointer=NULL;
	cin>>k;
	while (k--)
	{
		sum=0;
		cin>>m>>n;
		for ( count1=0;count1<m;count1++ )
		{
			for (count2=0;count2<n;count2++)
			{cin>>num[count1][count2];}                      //????
		}
		for ( pointer=num[0];pointer<num[0]+n;pointer++ )    //?????????
		{
			sum=sum+*pointer;
		}
		for (pointer=num[m-1];pointer<num[m-1]+n;pointer++)  //????????
		{
			sum=sum+*pointer;
		}
		for (pointer=num[1]+n-1,count3=1;count3<m-1;pointer=num[++count3]+n-1)   //????
		{
			sum=sum+*pointer;
		}
		for (pointer=num[1],count3=1;count3<m-1;pointer=num[++count3])    //????
		{
			sum=sum+*pointer;
		}
		cout<<sum<<endl;
	}
	return 0;
}

