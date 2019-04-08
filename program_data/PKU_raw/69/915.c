int main()
{
	char a[251],b[251];
	int a1[251],b1[251],result[252],n,i,j,k,len1,len2,len;
	cin>>a;
	cin>>b;
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++)
		a1[len1-1-i]=a[i]-'0';
	for(i=0;i<len2;i++)
		b1[len2-1-i]=b[i]-'0';
	if(len1>len2)
		len=len1;
	else len=len2;
	for(i=0;i<=len;i++)
		result[i]=0;
	for(i=0;i<len;i++)
	{
		if((i<len1)&&(i<len2))
		result[i]+=a1[i]+b1[i];
		else if(i>=len1)
			result[i]+=b1[i];
		else result[i]+=a1[i];
		if(result[i]>9)
		{
			result[i]-=10;
			result[i+1]=1;
		}
	}
	for(i=len;i>=0;i--)
		if(result[i]!=0)
		{
			len=i+1;
			break;
		}
	for(i=len-1;i>=0;i--)
		cout<<result[i];
	cout<<endl;
return 0;
}
