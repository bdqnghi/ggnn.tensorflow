
int main()
{
	char a[2000];
	char t;
	int i,cnt=0;
	cin.getline(a,2000);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]-a[i]==0||a[i+1]-a[i]=='a'-'A'||a[i+1]-a[i]=='A'-'a')
			cnt++;
		else
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				t=a[i]-32;
				cout<<"("<<t<<","<<cnt+1<<")";
			}
			else
			{
				t=a[i];
				cout<<"("<<t<<","<<cnt+1<<")";
			}
			cnt=0;
		}
	}
	return 0;
}