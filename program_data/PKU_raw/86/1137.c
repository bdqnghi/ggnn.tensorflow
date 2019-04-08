int main()
{
	int n,k,a[60],i;
	cin>>n;
	while(n>0)
	{
		cin>>k;
		for(i=1;i<=k;i++)
			cin>>a[i];
		if(k==0)cout<<60<<endl;
		else if(a[k]+k*3<=60)cout<<60-3*k<<endl;
		else for(i=1;i<=k;i++)
				if((a[i]+i*3<=60)&&(a[i+1]+i*3>60)){cout<<60-i*3<<endl;break;}
				else if((a[i]+(i-1)*3<=60)&&(a[i]+i*3>60)){cout<<a[i]<<endl;break;}
		n--;

	}
	return 0;
}