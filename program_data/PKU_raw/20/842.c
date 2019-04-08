int main()
{
	int i,k;
	char str[13]={0},substr[4]={0},max;
	while(cin>>str)
	{
		cin>>substr;
		max=str[0];                      //?????
		char *p=str,*q=substr;
		for (p=str+1;p<=str+9;p++)
			if (max<*p)
				max=*p;
		for (p=str;p<str+10;p++)               //??????????
			if (*p==max)
				break;
		k=p-str;
		for (p=str+9;p>str+k;p--)    //?????????????
			*(p+3)=*p;
		for (p=str+k+1;p<=str+k+3;p++,q++)           //??????
			*p=*q;
		p=str;
		cout<<p<<endl;
		for (i=0;i<10;i++)               //??????
			str[i]=0;
	}
	return 0;
}