int main()
{
	int l;
	char str[20],sub[20],*max,*p,temp;
	while(cin>>str)
	{
		l=strlen(str);
		cin>>sub;
		max=str;
		for(p=str;p<=str+l;p++)                           //??????????
		{
			if(*max<*p)
			{
				max=p;                                    //????????
			}
		}
		temp=*max;*max=0;
		cout<<str<<temp<<sub<<max+1<<endl;                //???????????????????????
	}
	return 0;
}



