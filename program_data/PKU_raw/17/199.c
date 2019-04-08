int main()
{
	char str1[101];
	char str2[101];
	int a[101];
	int l,i,j,temp;
	while(cin>>str1)//??????????????
	{
		l=strlen(str1);//????
		for(i=0;i<l;i++)
		{
			if(str1[i]=='(')
				a[i]=1;
			else if(str1[i]==')')
				a[i]=-1;
			else
				a[i]=0;
		}//?????????????
		for(i=0;i<l;i++)
		{
			if(a[i]==1)//????????
			{
                temp=0;
				for(j=i;j<l;j++)//????????
				{
					temp=temp+a[j];
					if(temp==0)
					{
						a[i]=0;
						a[j]=0;
						break;//??????????????????0
					}
				}
			}
		}
		for(i=0;i<l;i++)//?????????????
		{
			if(a[i]==1)
				str2[i]='$';
		     else if(a[i]==-1)
				str2[i]='?';
			 else 
				 str2[i]=' ';
		}
		str2[l]='\0';
		cout<<str1<<endl;
		cout<<str2<<endl;
		cout<<endl;
	}
	return 0;
}


