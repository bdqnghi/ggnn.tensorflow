
int judge(char *str1, char *str2,int len1,int len2)
{ int flag[100]={0};
if(len1!=len2)
{
	return 0;
}
for(int i=0;i<len1;i++)
{
	for(int j=0;j<len2;j++)
	{
		if(flag[j]==1)
		{
			continue;
		}
		if(*(str1+i)==*(str2+j))
		{
			flag[j]=1;
			break;
		}
	}
}
int p;
for(p=0;p<len2,flag[p]==1;p++)
{
;
}
if(p==len2)
{
	return 1;
}
else
{
	return 0;
}
}

int main()
{
	char str1[100],str2[100];
	cin>>str1>>str2;
	int len1=strlen(str1),len2=strlen(str2);
	if(judge(str1,str2,len1,len2))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}

