int main()
{
	char c[31];
	char num[30][10];
	int s=0;
	int i;
	char *p,*q;
	cin.getline(c,31);                         //??
	p=c;q=num[s];
	while(1)
	{
		if(*p=='\0')                           //??
		{
			*q='\0';
			s++;
			break;
		}
		if(*p-'0'<10&&*p-'0'>=0)               //???????
		{
			*q=*p; 
			p++;q++;
			continue;
		}
		if(*(p-1)-'0'<10&&*(p-1)-'0'>=0        //????????+1
			&&*p-'0'>=10||*p-'0'<0)
		{
			*q='\0';
			q=num[++s];
			p++;
			continue;
		}
		else p++;                               //????
	}
	for(i=0;i<s;i++)
		cout<<num[i]<<endl;
	return 0;
}