int main()
{
	char s1[max],s2[max];
	int a1[max],a2[max];
	int i,j;
	cin.getline(s1,max);
	cin.getline(s2,max);
	for(i=0;i<max;i++)
	{a1[i]=0;a2[i]=0;}
	int len1=strlen(s1);
	int len2=strlen(s2);
	for(i=0;i<len1;i++)
		a1[i]=s1[len1-1-i]-'0';
	for(i=0;i<len2;i++)
		a2[i]=s2[len2-1-i]-'0';
	for(i=0;i<max;i++)
	{
		a1[i]=a1[i]+a2[i];
		if(a1[i]>=10) {a1[i+1]++;a1[i]-=10;}
	}
	for(i=max-1;i>=0;i--)
	{if(a1[i]!=0) break;}
	if(i==-1) cout<<0<<endl;
	else{
	for(j=i;j>=0;j--) cout<<a1[j];
	}
	return 0;
}
		