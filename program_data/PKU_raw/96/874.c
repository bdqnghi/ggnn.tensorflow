
int l=0;
int shang[100];
char num[100];
int first;
int n;
void count()
{
    if(l==n-1)
    return;
    else if(l!=n-2)
    {
        shang[l]=first/13;
        first=(first-13*shang[l])*10+(num[l+2]-'0');
        l++;
		count();
    }
	else 
	{
		shang[l]=first/13;
		first=first-13*shang[l];
		l++;
		count();
	}
}
int main()
{
    cin>>num;
    n=strlen(num);
	if(n==1)
	  cout<<"0"<<endl<<num;
	else if(n==2)
	{
		first=(num[0]-'0')*10+(num[1]-'0');
		if(first<13)
			cout<<"0"<<endl<<num;
		else 
			{count();
		if(shang[0]==0)
   {
	   for(int j=1;j<n-1;j++)
		   cout<<shang[j];
   }
   else
	{for(int i=0;i<n-1;i++)
    cout<<shang[i];
   }
    cout<<endl;
    cout<<first;
	}
	}
	else
	{
   { first=(num[0]-'0')*10+(num[1]-'0');
    count();
   if(shang[0]==0)
   {
	   for(int j=1;j<n-1;j++)
		   cout<<shang[j];
   }
   else
	{for(int i=0;i<n-1;i++)
    cout<<shang[i];
   }
    cout<<endl;
    cout<<first;
	}
	}
    return 0;
}
