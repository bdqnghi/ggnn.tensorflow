//**********************************************************
//????????
//??????
//???2010?12?20?
//**********************************************************
char temp[10];
void strsub(char *a,int start)
{
	int i;
	int len=strlen(a);
	for(i=start;i<len;i++)
	{
		temp[i-start]=a[i];
		a[i]='\0';
	}
	temp[len-start]='\0';

}

int main()
{
	char str1[10],str2[10];
	char max;
	int flag,i;
	int len;
	while(cin>>str1>>str2)
	{
		len=strlen(str1);
		max=0;
		for(i=0;i<len;i++)
			if(max<str1[i])
			{
				max=str1[i];
				flag=i;
			}
		strsub(str1,flag+1);
		strcat(str1,str2);
		strcat(str1,temp);
		cout<<str1<<endl;
	}
	return 0;
}
