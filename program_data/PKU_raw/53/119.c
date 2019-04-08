int main()
{
	int n,a[300],*p1,*p2,i,num=0,b[300],j,flag;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	p1=a;
	p2=b;
    b[num]=*p1;
	num++;
	for(i=0;i<n;i++)
	{
		flag=0;
        for(j=0;j<num;j++)
		{ if(*(p1+i)==*(p2+j))
		flag=1;
		}
		if(flag==0)
		{
		*(p2+num)=*(p1+i);
			num++;
		}
	}
	for(i=0;i<num;i++)
	{
		if(i==num-1)
			cout<<*(p2+i)<<endl;
		else
			cout<<*(p2+i)<<",";
	}
	return 0;
}
