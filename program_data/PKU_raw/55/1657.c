int main()
{
	char n[1000];
	int a,b,i,j=0,num=0,m[1000];
	cin>>a>>n>>b;
	int length=strlen(n);
	for(i=0;i<length;i++)
	{
		if(n[i]>64 && n[i]<91) n[i]+=32;
	}
	for(i=0;i<length;i++)
	{
		if(n[i]>96 && n[i]<123)
		{
			num+=(n[i]-'a'+10)* pow ( (double)a ,(double)(length-1-i) );
		}
		else num+=(n[i]-'0') * pow( (double)a , (double)(length-1-i) );
	}
	
	for(i=0;;i++)
	{
		m[i] = num % b;
		num = num/b;
		j++;
		if(num==0) break;
	}
	for(i=j-1;i>=0;i--)
	{
		if(m[i]>9) cout<<(char)(m[i]-10+'A');
		else cout<<m[i];
	}
	return 0;
}