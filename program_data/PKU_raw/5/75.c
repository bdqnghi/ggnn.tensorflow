int main()
{
	float rate,rate0;
	int sum=0,len1,len2,i,tag=0;
	char base1[501],base2[501];
	cin>>rate>>base1>>base2;
	len1=strlen(base1);
	len2=strlen(base2);
	if(len1!=len2)
	{
		tag=1;
		goto pku;
	}
	for(i=0;i<len1;i++)
	{
		if(base1[i]!='A'&&base1[i]!='T'&&base1[i]!='C'&&base1[i]!='G'||base2[i]!='A'&&base2[i]!='T'&&base2[i]!='C'&&base2[i]!='G')
		{
			tag=1;
			goto pku;
		}
		if((int)base1[i]==(int)base2[i]) sum++;
		else continue;
	}
	rate0=(float)sum/len1;
	if(rate0>rate) cout<<"yes";
	else cout<<"no";
pku:if(tag) cout<<"error";
	return 0;
}