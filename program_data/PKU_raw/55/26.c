

//????

int main()

{
	int n,m;
	int i,j,k,l;
	char a[33];
	int b[33];
	long int mid;
	int ar;
	
	cin>>n;
	
	for(i=0;i<33;i++)
	{
		a[i]=48;
		b[i]=-1;
	}
	
	cin>>a;
	i=0;
	
	while(a[i]!='\0')
		i++;
	a[i]=48;
	k=33-i;
	for(l=0;l<i;l++)
	{
		a[k]=a[l];
		a[l]=48;
		k++;
	}
	
	//????????
	//??????????????
	
	for(k=0;k<33;k++)
	{
		if((a[k]>='0')&&(a[k]<='9'))
			a[k]-='0';
		else if((a[k]>='a')&&(a[k]<='z'))
			a[k]=a[k]-87;
		else 
			a[k]=a[k]-55;
	}
	
	//???????ing
	
	mid=0;
	ar=1;
	for(j=32;j>=33-i;j--)
	{
		mid+=a[j]*ar;
		ar*=n;
	}
	
	//?????????
	
	cin>>m;
	k=0;
	while(mid!=0)
	{
		b[k]=mid%m;
		mid=mid/m;
		k++;
	}
	for(i=32;i>=0;i--)
		if(b[i]!=-1)
		{
			if(b[i]>=10)
			{
				char m=b[i]+55;
				cout<<m;
			}
			else
				cout<<b[i];
		}
		cout<<'\n';
        return 0;
}
