int main()
{
	int a,b,i,k,lgth,n=0,string2[32],num[32],rest[32];                           
	char string1[32];                                        
	cin>>a>>string1>>b;                                       //?????
	lgth=strlen(string1);                                     //???????
	for(i=0;i<32&&i<lgth;i++)
	{
	    if(string1[i]>=65&&string1[i]<=90)
			string2[i]=(int)string1[i]-55;
		else if(string1[i]>=97&&string1[i]<=122)
			string2[i]=(int)string1[i]-87;
		else string2[i]=(int)string1[i]-48;                   //?????????????
	    n=n+pow(a,lgth-i-1.0)*string2[i];                     //??????????
	}
	rest[0]=n;
    for(i=0;i<32;i++)
	{
		if(rest[i]!=0)
		{
			num[i]=rest[i]%b;                                 //??b?????????
		    rest[i+1]=rest[i]/b; 
			if(num[i]<=9)
				string1[i]=num[i]+48;                         //?b???????????9??????????ASCII?
			else string1[i]=num[i]+55;                        //?b???????????9????????
		}
        else 
		{
			k=i;                                              //???????
			break;                                           
		} 
       
	}
    if(n==0)
		cout<<n;
	else
	{
		for(i=k-1;i>=0;i--)
		cout<<string1[i];                                     //??b???????
	}                                                           
    return 0;
       
}