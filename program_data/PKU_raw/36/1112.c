int main()
{
	int i,j,n1,n2,count=0,k,k2;
	char str1[100],str2[100];
	cin>>str1>>str2;
	n1=strlen(str1);
	n2=strlen(str2);
	int num1[26]={0},num2[26]={0};
for(i=0;i<26;i++)
{
	for(k=0;k<n1;k++)
	if(str1[k]=='a'+i)
		num1[i]++;
	for(k2=0;k2<n2;k2++)
	if(str2[k2]=='a'+i)
		num2[i]++;
}
for(j=0;j<26;j++)
{
	if(num1[j]==num2[j])
		count++;
}
if(count==26)
	cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
