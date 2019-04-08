int main()
{
	int n,i,j,k;
	char str1[251],str2[251];
	cin.getline(str1,251);
	cin.getline(str2,251);
	int save1[252]={0},save2[250]={0};                 //????????????????????
	int len1=strlen(str1),len2=strlen(str2);
	for(i=len1-1;i>=0;i--)
		save1[len1-1-i]=str1[i]-'0';
	for(i=len2-1;i>=0;i--)
		save2[len2-1-i]=str2[i]-'0';
	int max=(len1>len2)?len1:len2;
	for(i=0;i<max;i++)
	{
		save1[i]+=save2[i];
		if(save1[i]>=10)
		{
			save1[i+1]+=1;
			save1[i]-=10;
		}
	}
	for(i=250;i>=0;i--)
		if(save1[i]!=0)
			break;
	for(j=i;j>=0;j--)
		cout<<save1[j];
	if(i<0)
		cout<<0<<endl;                    //???????
	return 0;
}