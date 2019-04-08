

int main()
{
	char ch[1002]={'\0'};
	cin>>ch;
	int len;
	len=strlen(ch);
	int i=0,num=0;
	char temp=ch[0];
	

	
for(i=0;i<len+1;i++)
		if(ch[i]==temp||ch[i]==(temp+32)||ch[i]==(temp-32))num++;
		else {
			if(97<=temp&&temp<=122)cout<<"("<<(char)(temp-32)<<","<<num<<")";
			else cout<<"("<<(char)temp<<","<<num<<")";
			temp=ch[i];num=1;}
		

  //cout<<(int)'A'<<endl;
  	return 0;
}