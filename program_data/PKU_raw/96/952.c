char li[110];
char up[110];
int num=0;
void chu(int i)
{
	int bc;
	bc=(li[i]-'0')*100+(li[i+1]-'0')*10+li[i+2]-'0';
	int yu;
	int jie;
	jie=bc/13;
	yu=bc%13;
	if(num==0&&jie>10)
	{
		
			up[num]=jie/10+'0';
			num=num+1;
			up[num]=jie-jie/10*10+'0';
			num=num+1;
		
	}
	else
	{
		up[num]=jie+'0';
		num=num+1;
	}
	li[i]=0+'0';
	if(yu>10)
	{
		li[i+1]=yu/10+'0';
		li[i+2]=yu-10+'0';
	}
	else
	{
		li[i+1]='0';
		li[i+2]=yu+'0';
	}
}
int main()
{
	memset(li,'\0',sizeof(li));
	memset(up,'\0',sizeof(up));
	while(cin>>li)
	{
		
		num=0;
		int len;
		len=strlen(li);
		if(len>3){
		for(int j=0;j<len-2;j++)
		{
			chu(j);
		}
		cout<<up<<endl;
		if(li[len-2]=='1') cout<<'1';
		cout<<li[len-1]<<endl;}
		else 
		{
			int t;
			t=atoi(li);
			cout<<t/13<<endl;
			cout<<t%13<<endl;
		}
		memset(li,'\0',sizeof(li));
		memset(up,'\0',sizeof(up));
	}
	
	return 0;
}

