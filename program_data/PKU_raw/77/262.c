
void solve(char str[],char m,char f)
{
	int l,flag=1,i,k;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==m||str[i]==f)
		{
			flag=0;
			break;
		}
	}
	if(flag) return;
	for(i=0;i<l;i++)
	{
		if(flag==1&&str[i]==f) 
		{
			cout<<k<<" "<<i<<endl;
			flag=0;
			str[k]=' ';
			str[i]=' ';
			break;
		}
		if(str[i]==m) 
		{
			flag=1;
			k=i;
		}
		if(str[i]==f) flag=0;
	}
	solve(str,m,f);
}
int main()
{
	char str[100],m,f,*p;
	cin.getline(str,100,'\n');
	m=str[0];
	for(p=str;p<str+strlen(str);p++)
	{
		if(*p!=m)
		{
			f=*p;
			break;
		}
	}
	solve(str,m,f);
	return 0;
}