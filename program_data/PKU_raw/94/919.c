int main()
{
	int N,num,b[500],i,j=0,count=0,temp=0;//num?????N???b[100]???????count??????
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>num;
		if(num%2!=0)
		{
			b[j]=num;
			j++;
			count++;
		}
	}//???????????????
    for(j=0;j<count-1;j++)
	{
		for(i=0;i<count-j-1;i++)
		{
			if(b[i]>b[i+1])
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}//????
	}
	for(i=0;i<count-1;i++)
	{
		cout<<b[i]<<",";
	}
	cout<<b[count-1];
	return 0;
}