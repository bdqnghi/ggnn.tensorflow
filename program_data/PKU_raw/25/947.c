int main()
{
	int n,i,j,point,p;
    char str1[50],str2[50];
	cin>>n;
	if(n==0)
		cout<<'1'<<endl;
	else
	{
	for(i=0;i<50;i++)
	{
		str1[i]='0';
		str2[i]='0';
	}
	str1[0]='1';
	//???
		for(i=1;i<=n;i++)
		{
			for(p=49;p>=0;p--)
				if(str1[p]!='0'||str2[p]!='0')
				{
					point=p+1;
					break;
				}//?????

            for(j=0;j<=point;j++)
			{
				
				str2[j+1]=((str1[j]-'0')*2+(str2[j]-'0'))/10+'0';//???????
                str1[j]=((str1[j]-'0')*2+(str2[j]-'0'))%10+'0';
				
			}
		}
		for(j=49;j>=0;j--)
		{
			if(str1[j]!='0')
			{
	          point=j;
			  break;
			}
		}
		for(j=point;j>=0;j--)
			cout<<str1[j];
		cout<<endl;
	}
		return 0;
	}


	