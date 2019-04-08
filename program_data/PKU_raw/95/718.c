int main(){
	int i;
	char a[100],b[100];
	cin.getline(a,80);
	cin.getline(b,80);
	for(i=0;a[i]!=0;i++)
	{if(a[i]>=97)
	a[i]=a[i]-32;
	if(b[i]>=97)
	b[i]=b[i]-32;}

	for(i=0;a[i]!=0;i++)
		if(a[i]==b[i])
		{continue;}
		else if(a[i]>b[i])
		{cout<<'>';
		return 0;
		}
		else if(a[i]<b[i])
		{cout<<'<';
		return 0;
		}
		cout<<'=';
	    return 0;
		}
