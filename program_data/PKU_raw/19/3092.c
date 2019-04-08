int main()
{
	int i,j,l=0,k=0,m[100],str1,str2,str3;
	char a[1000],b[100],c[1000],d[1000];
	cin.getline(a,1000);
	cin.getline(b,100);
	cin.getline(c,1000);
	str1=strlen(a);
	str2=strlen(b);
	str3=strlen(c);
	for(i=0;i<str1;i++)
	{
		for(j=0;j<str2;j++)
		{
			if(a[i+j]!=b[j])
			{
				break;
			}
			if(j==str2-1&&(a[i-1]==' '||i==0))
			{
				m[k]=i;k++;
			}
		}
	}
	k=0;
	for(i=0;i<str1;i++)
	{
		if(m[k]==i)
		{
			l++;k++;i+=str2-1;
			for(j=0;j<str3;j++)
			{
				cout<<c[j];
			}
		}
		else
		{
		    cout<<a[i];
		}
	}
	return 0;
}