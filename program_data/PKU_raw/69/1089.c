/*1069 ?????*/ 



int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int main()
{
	char x1[260],x2[260];
	cin.getline(x1,260);
	cin.getline(x2,260);
    int len1,len2; //len1.len2
	if(strlen(x1)<strlen(x2))//len3.len4
	{
		char c[260];
		strcpy(c,x1);strcpy(x1,x2);strcpy(x2,c);
	}
	len1=strlen(x1);
	len2=strlen(x2);
	int i;
	int a1[260]={0},a2[260]={0};
	//????????
	for(i=len1;i>0;i--)
	{
		a1[i]=x1[i-1]-'0';
		a2[i]=i-len1+len2>=1?x2[i-len1+len2-1]-'0':0;
	}
	//???????
	for(i=len1;i>0;i--)
	{
	a1[i]+=a2[i];
		int j=i;
		while(a1[j]>=10 && j>=0)
		{
			a1[j-1]+=a1[j]/10;
			a1[j]%=10;
			j--;
	}
	}
       //??
	i=0;
	while(a1[i]==0 && i<len1) i++;
	for(;i<=len1;i++) cout<<a1[i];
	cout<<endl; 
	return 0;
}