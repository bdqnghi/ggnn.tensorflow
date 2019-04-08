int main()
{
	char num[200];
	int innum[200],outnum[200],temp=0,i,len,mark=0;//temp???????13???
	cin.getline(num,200);
	len=strlen(num);
	for(i=0;i<len;i++)
		innum[i]=num[i]-'0';//??????
	for(i=0;i<len;i++)
	{
		temp=temp*10+innum[i];
		if(temp/13)
		{
			outnum[i]=temp/13;//???13?????outnum?
			temp=temp%13;//temp??temp%13
		}
		else
			outnum[i]=0;
	}
	for(i=0;i<len;i++)
	{
		if(mark==0&&outnum[i]==0)//mark?????0???
			continue;
		if(outnum[i])
			mark=1;
			cout<<outnum[i];
	}
	if(!mark)
		cout<<'0'<<endl<<temp;
	else cout<<endl<<temp;
		return 0;

}