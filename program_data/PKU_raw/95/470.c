int main()
{
	int n,i,j,flag=0;
	char a[82],b[82];
	gets(a);gets(b);
	i=0;j=0;
	while(i<strlen(a)&&j<strlen(b))
	{
		a[i]=a[i]>='A'&&a[i]<='Z'?a[i]+32:a[i];
		b[j]=b[j]>='A'&&b[j]<='Z'?b[j]+32:b[j];
		if(a[i]==b[j]) 
		{
			i++;
			j++;
		}
		else if(a[i]>b[j]) 
		{
			cout<<">"<<endl;
			flag=1;
			break;
		}
		else if(a[i]<b[j])
		{
			cout<<"<"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	if(strlen(a)==strlen(b)) cout<<"="<<endl;
	else if(strlen(a)>strlen(b)) cout<<">"<<endl;
	else cout<<"<"<<endl;
	}
	return 0;
}
