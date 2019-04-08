int main()
{
	int i,t=0,s=0;
	float n;
	char a[600],b[600];
	cin>>n;
	cin>>a;
	cin>>b;
    if(strlen(a)!=strlen(b))
		cout<<"error";
	else
	{
		for(i=0;i<strlen(a);i++)
		{
			if((a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G')||(b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G'))
				t++;
		}
		
		if(t>0)
		cout<<"error"<<endl;
		else
		{

			   for(i=0;i<strlen(a);i++)
			   {
                if(a[i]==b[i])
					s++;
			   }

			   if((float)s/strlen(a)>n)
				   cout<<"yes";
			   else
				   cout<<"no";
		}
	}
     return 0;

}