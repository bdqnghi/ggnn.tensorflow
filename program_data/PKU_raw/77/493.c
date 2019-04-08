void out(char s[],int a[],char boy,int len)
{   
	int i,k;
	if(len==2)
		cout<<a[0]<<' '<<a[1]<<endl;
	else
	{
		for(i=0;i<len-1;i++)
			if(s[i]==boy&&s[i+1]!=boy)
			{
				cout<<a[i]<<' '<<a[i+1]<<endl;
				for(k=i;k<len-2;k++)
				{
					s[k]=s[k+2];
				    a[k]=a[k+2];
				}
				out(s,a,boy,len-2);
				break;
			}
	}
	return;
}
int main(){
	char s[100];
	cin>>s;
	int a[100],i;
	int len=strlen(s);
	for(i=0;i<100;i++)
		a[i]=i;
	char boy=s[0];
	out(s,a,boy,len);
    return 0;
}
