//??????????
int main()
{
	char a[80],b[80];//???????
	int i=0,j=0,lena=0,lenb=0,min=0;
	cin.getline(a,80);
	cin.getline(b,80);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-32;
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='a' && b[i]<='z')
			b[i]=b[i]-32;
	}
	lena=strlen(a);lenb=strlen(b);
	if(lena<lenb)
		min=lena;
	if(lena>=lenb)
		min=lenb;
	for(i=0;i<min;i++)
		{
		    j=j+1;
			if(a[i]==b[i])
				continue;
			if(a[i]>b[i])
			{
				cout<<">"<<endl;break;
			}
			if(a[i]<b[i])
			{
				cout<<"<"<<endl;break;
			}
		}
		if(j==i)
		{
			if(lena>lenb)
				cout<<">"<<endl;
			if(lena<lenb)
				cout<<"<"<<endl;
			if(lena==lenb)
			    cout<<"="<<endl;
		}

    
	return 0;
}
	

		

	