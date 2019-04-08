int main()
{
	int total[15],w,i,j,m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};  //m??????? total???????????
	cin>>w;
	for(i=1;i<=12;i++)
	{
		total[i]=0;      //?????
	}
	for(i=2;i<=12;i++)
	{
		for(j=1;j<i;j++)
		{
			total[i]=total[i]+m[j];  //??total
		}
	}
	/*for(i=1;i<=12;i++)
	{
		cout<<total[i]<<" ";    //????total??????
	}
	return 0;
}
	*/
	for(i=1;i<=12;i++)
	{
		if((total[i]+13-1+(w-5))%7==0)  //????????
		{
			cout<<i<<endl;
		}
	}
	return 0;
}

  