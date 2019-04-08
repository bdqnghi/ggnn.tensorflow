int main()
{
	char a[250],b[250];
	unsigned n[251],m[251];
	memset(n,0,sizeof(n));
	memset(m,0,sizeof(m));
	cin.getline(a,250);
	cin.getline(b,250);
	int l1=strlen(a),l2=strlen(b);
	for(int i=0;i<l1;i++)
		n[i]=a[l1-i-1]-'0';//?????
	for(int j=0;j<l2;j++)
		m[j]=b[l2-j-1]-'0';//?????
	for(int i=0;i<250;i++)
	{
		 n[i]+=m[i];
		if(n[i]>9)
			{
				n[i]-=10;
				n[i+1]++;
		   }
	}
	int k=250;
	while(n[k]==0) k--;
        if(k<0)  cout<<"0";
        else
            {
			for(;k>=0;k--)
		    cout<<n[k];
}
	return 0;
}


