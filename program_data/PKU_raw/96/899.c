int step=0,length=0,a=0;
int sang[101]={0};
void buqi(int num1[101],int num2[101])
{
	int i;
	num2[0]=1;
	num2[1]=3;
	num2[2]=0;
	if(num1[0]>num2[0]||(num1[0]==num2[0]&&num1[1]>=num2[1])) i=1;
	else
	{
		a++;
		num2[0]=0;
		num2[1]=1;
		num2[2]=3;
		//cout<<a<<endl;
	}
}
void qingling(int num3[101],int num6[101])
{
	int i,j;
	for(i=0;i<length;i++)
	{
		if(num3[i]!=0)
			break;
	}
	for(j=0;j<length-i;j++)
		num3[j]=num3[j+i];
	for(j=length-i;j<length;j++)
		num3[j]=0;
	length=length-i;
	//cout<<length<<endl;
	if(num6[0]!=0)
		a=a+i-1;
	else a=a+i-2;
	//cout<<a<<endl;
}
void jianfa(int num4[101],int num5[101],int i)
{
	int j;
	while(true)
	{
		for(j=i-1;j>=0;j--)
		{
			if(num4[j]>=num5[j])
			{
				num4[j]=num4[j]-num5[j];
				//cout<<num4[j]<<" ";
			}
			else 
			{
				num4[j-1]=num4[j-1]-1;
				num4[j]=num4[j]+10;
				num4[j]=num4[j]-num5[j];
				//cout<<num4[j]<<" ";
			}
		}
		//cout<<endl;
		if(num5[0]==1)
		{
			if(num4[0]>num5[0]||(num4[0]==num5[0]&&num4[1]>=num5[1])) j=j;
			else break;
		}
		else 
		{
			if(num4[0]>num5[0]||num4[1]>num5[1]||(num4[1]==num5[1]&&num4[2]>=num5[2])) j=j;
			else break;
		}

		step++;
	}
}
int main()
{
	char str1[101]={'\0'};
	int num1[101]={0},num2[101]={0};
	int i,weishu,biaoji=0,j;
	cin>>str1;
	length=strlen(str1);
	weishu=length;
	for(i=0;i<length;i++)
	{
		num1[i]=str1[i]-'0';
	}
	while(true)
	{
		step=0;
		if(length==1)
			break;
		buqi(num1,num2);
		if(length==2&&num2[0]==0)
		{
			num1[0]=num1[0]*10+num1[1];
			sang[a]=0;
			break;
		}
		else
		{
			jianfa(num1,num2,length);
			biaoji=0;
			for(i=0;i<weishu;i++)
			{
				if(num1[i]!=0)
				{
					biaoji=1;
					break;
				}
			}
			sang[a]=step+1;
			//cout<<a<<" "<<sang[a]<<" "<<endl;
			if(biaoji==1)
			{
				qingling(num1,num2);
			}	
			else break;
		}
		a++;
	}
	if(weishu>1)
	{
		for(i=0;i<weishu-1;i++)
		{
			if(sang[i]!=0)
				break;
		}
		if(i==weishu-1)
			cout<<sang[0];
		else
		{
			for(j=i;j<weishu-1;j++)
				cout<<sang[j];
		}
	}
	else cout<<sang[0];
	cout<<endl;
	cout<<num1[0]<<endl;
		return 0;
}

