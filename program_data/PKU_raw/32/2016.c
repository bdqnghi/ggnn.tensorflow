int main()
{
	char a[100],b[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		int mark=0;
		if(strlen(a)<strlen(b))
		{
			char d[1000];
			strcpy(d,a);strcpy(a,b);strcpy(b,d);mark=1;
		}
		else if(strlen(a)==strlen(b))
		{
			int s=0;
			for(int i=0;i<strlen(a);i++)
			{
				if(a[i]-b[i]>0) {s=1;break;}
				else if(a[i]-b[i]<0) {s=-1;break;}
			}
			if(s==-1) 
			{
				char d[1000];
				strcpy(d,a);strcpy(a,b);strcpy(b,d);mark=1;
			}
		}
		if(mark) cout<<"-";
		int i=0,j=0,k=0;
		int lend=0,c[1000];
		for(i=strlen(a)-1,j=strlen(b)-1,k=0;i>=0&&j>=0;i--,j--,k++)
		{
			if(lend)
			{
				if(a[i]==48) {lend=1;a[i]=a[i]+9;}
				else {a[i]--;lend=0;}
			}
			if(a[i]>=b[j]) c[k]=a[i]-b[j];
			else {c[k]=a[i]-b[j]+10;lend=1;}
		}

		while(i>=0)
		{
			if(lend)
			{
				if(a[i]==48) {lend=1;a[i]=a[i]+9;}
				else {a[i]--;lend=0;}
			}
			c[k]=a[i]-48;
			k++;i--;
		}
		while(j>=0)
		{
			if(lend)
			{
				if(a[i]==48) {lend=1;a[i]=a[i]+9;}
				else {a[i]--;lend=0;}
			}
			c[k]=b[j]-48;
			k++;j--;
		}

		for(i=k-1;i>=0;i--)
		if(c[i]!=0) break;
		if(i==-1) cout<<c[0];
		else for(j=i;j>=0;j--)
		cout<<c[j];
		cout<<endl;
	}
	return 0;
}