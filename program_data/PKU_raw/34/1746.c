
void jg(int a)
{
       int t =0;
	if (a==1) cout<<"End";
	else if (a%2==1)
	{
		t=a*3+1;
	cout<<a<<"*3+1="<<t<<endl;
		jg(t);
		}
		else
		{
			t=a/2;
			cout<<a<<"/2="<<t<<endl;
			jg(t);
		}
	}

int main()
{
	int a=0;
	cin>>a;
	jg(a);
	return 0;
	}