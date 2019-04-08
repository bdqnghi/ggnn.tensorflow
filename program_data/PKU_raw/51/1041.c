int main()
{
	int i,j,k=0,n,len,word[510]={0},max=0,num;
	char str[510]={0},str2[510][8]={0};
	cin>>n;
	cin.get();
	cin.get(str,510);
	len=strlen(str);
	for(i=0;i<=len-n;i++)
	{
		strncpy(str2[k],str+i,n);//???????ch2[k]
		for(j=0;j<k;j++)
			if(!strcmp(str2[j],str2[k]))//??????
			{
				word[j]++;//?1
				k--;
				break;
			}
		k++;
	}
	num=k;
	for(i=0;i<num;i++)
	{
		word[i]++;//????0???1
		if(word[i]>max)
			max=word[i];
	}
	if(max==1)
		cout<<"NO"<<endl;//???1
	else 
	{
		cout<<max<<endl;
		for(i=0;i<num;i++)
			if(word[i]==max)//??????????
				cout<<str2[i]<<endl;
	}
	return 0;
}