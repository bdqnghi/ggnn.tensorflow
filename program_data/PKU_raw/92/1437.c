
int main()
{
	int rn;
	int a[1001], b[1001],t,i,j,as,ae,bs,be,c;
	while(1){
		cin >> rn;
		if(rn == 0)
			break;
		for(i = 0;i<rn; i ++)
			cin>>a[i];
		for(i = 0;i<rn; i ++)
			cin>>b[i];
		for(i = 0; i < rn - 1; i ++)
			for(j = i + 1; j < rn; j ++)
				if(a[i]<a[j])
				{
					t=a[i];a[i]=a[j];a[j]=t;
				}
		for(i = 0; i < rn - 1; i ++)
			for(j = i + 1; j < rn; j ++)
				if(b[i]<b[j])
				{
					t=b[i];b[i]=b[j];b[j]=t;
				}
		as=0;
		ae=rn-1;
		bs=0;
		be=rn-1;
		c=0;
		while(as<=ae&&bs<=be)
		{
			if(a[ae]>b[be])
			{
				c++;
				ae--;
				be--;
				continue;
			}
			if(a[ae]<b[be])
			{
				c--;
				ae--;
				bs++;
				continue;
			}
			if(a[as]>b[bs])
			{
				c++;
				as++;
				bs++;
				continue;
			}
			if(a[as]<b[bs])
			{
				c--;
				ae--;
				bs++;
				continue;
			}
			if(a[as]==b[bs])
			{
				if(a[ae]<b[bs])
					c--;
				ae--;
				bs++;
				continue;
			}		
		}
		cout<<c*200<<endl;
	}
	return 0;
}