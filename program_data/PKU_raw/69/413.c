int main()
{   
	char num1[251],num2[251];
	int a[251],b[251],d[251],len1,len2,i=0,j=0;
	memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
	memset(d,0,sizeof(d));
    cin.getline (num1,251);
	cin.getline (num2,251);
	len1=strlen(num1);
	len2=strlen(num2);
	for(i=len1-1;i>=0;i--)
	{
		a[j++]=num1[i]-'0';
	}
	j=0;
    for(i=len2-1;i>=0;i--)
	{
		b[j++]=num2[i]-'0';
	}
    for(i=0;i<251;i++)
	{
		if(a[i]!=0 || b[i]!=0)break;
		if(i=250){cout<<"0";return 0;}
	}
	//for(i=0;i<len1;i++){cout<<a[i];}
	//cout<<endl;
	//for(i=0;i<len2;i++){cout<<b[i];}
    //cout<<endl;
	for(i=0;i<251;i++)
	{
		if((a[i]+b[i]+d[i])>=10)
		{
			d[i]=d[i]+a[i]+b[i]-10;
			d[i+1]=1;
		}
		else{d[i]=d[i]+a[i]+b[i];}
	}
	for(j=250;j>=0;j--)
	{
		if(d[j]!=0)break;
	}
	for(i=j;i>=0;i--)
	{cout<<d[i];}
	return 0;
}