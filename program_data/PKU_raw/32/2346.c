//**************************************
//*  ????4.cpp                     *
//*  ??????                      *
//*  ?????2013?11?16?          *
//*  ????????                  *
//**************************************

int main() 
{
	const int N=110;
    int T,i,l1,l2,tw=0,a[N],b[N],c[N];
    char s1[N],s2[N];
	cin >> T;cin.get();
	while (T--) 
	{
		cin.getline(s1,100);
		cin.getline(s2,100);
		l1=strlen(s1);l2=strlen(s2);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		for (i=1;i<=l1;i++)
			a[N-i]=s1[l1-i]-'0';
		for (i=1;i<=l2;i++)
			b[N-i]=s2[l2-i]-'0';
		for (i=N-1;i>=N-l1;i--) 
		{
			c[i]=a[i]-b[i]-tw;
			if (c[i]<0) 
			{
				c[i]+=10;
				tw=1;
			} 
			else tw=0;
		}
		while (c[i]==0) i++;
		for (;i<N;i++) 
			cout << c[i];
		cout << endl;
		cin.get();
	}
	return 0;
}
