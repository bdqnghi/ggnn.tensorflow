int main()
{
	int i,n1,n2,p=1,len1,len2;
	char str1[80],str2[80];//?????????
	cin.get(str1,80);
    len1=strlen(str1);
	cin.get ();//??????????
	cin.get(str2,80);
	len2=strlen(str2);
	for(i=0;i<len1||i<len2;i++)
	{
		n1=str1[i];
		n2=str2[i];
		if (n1==n2||n1==(n2+32)||n2==(n1+32))//????????????????
			p=1;
		else
		{p=0;break;}
	}
	if (p==1)
		cout<<"="<<endl;
	else
	{
		if(n1<'a')
			n1=n1+32;
		if(n2<'a')
			n2=n2+32;
		if(n1<n2)
			cout<<"<"<<endl;
		else
		cout<<">"<<endl;
	}
	return 0;
}

		
	