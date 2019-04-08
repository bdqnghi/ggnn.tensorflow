int main()
{
	int len1,len2,len3;          //???????
	char a[100],b[100],c[100];   //????
	gets(a);
	gets(b);
	gets(c);
	len1=strlen(a);
	len2=strlen(b);
	len3=strlen(c);
	int i,j=0,m,n,k,space[100]; //space????????
	space[0]=0;
	for(i=0;i<len1;i++)
		if(a[i]==' ')
		{
			j=j+1;
			space[j]=i+1;       //space[i]??i???+1???
			                    //?????i????
		}
	for(i=0;i<j;i++)                     //???????????
	{
		k=0;
		for(m=space[i];m<space[i]+len2;m++)//?????len2?????
		{
			if(a[m]==b[m-space[i]])
				k=k+1;                   //???k?+1
		}
		if(k==len2&&a[space[i]+len2]==' ')
			//??????????(?youself?you???s,??)**
			cout<<c<<' ';
		else                         //??????
		{
			for(n=space[i];n<space[i+1];n++)
				cout<<a[n];
		}
	}
	k=0;
	for(i=space[j];i<len1;i++)       //????
		if(a[i]==b[i-space[j]])
			k=k+1;
		if(k==len2&&len1-space[j]==len2)//???** 
			cout<<c;
		else
		{
			for(n=space[j];n<len1;n++)
				cout<<a[n];
		}

	return 0;
}