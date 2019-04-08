int main()
{
	char str[20],substr[5];   //??????
	while(cin>>str>>substr)   //??
	{
	int j=0;
	int A=strlen(str);         //????
	int B=strlen(substr);
	int k=0;
	char temp=str[0];         //??
	for(int i=0;i<A;i++)
		if(str[i]>temp)
			temp=str[i];
	for(j=0;j<A;j++)
		if(str[j]==temp)
			break;
	j++;
	for(k=A;k>=j;k--)
		str[k+B]=str[k];
	
	for(int l=j;l<=j+B-1;l++)
    str[l]=substr[l-j];
	cout<<str<<endl;      //??
	}
	return 0;
}