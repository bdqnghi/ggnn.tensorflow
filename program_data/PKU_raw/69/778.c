int main ()
{
	char a[255],b[255];
	int m[255]={0},n[255]={0};
	int s1,s2;
	cin>>a;
	cin>>b;
	s1=0;
	for(int i=0;a[i]!='\0';i++)   s1++;
	for(int i=s1-1,j=0;i>-1;i--,j++)
	{
		m[j]=(int) ( a[i]-'0' );
	}
	s2=0;
	for(int i=0;b[i]!='\0';i++)   s2++;
	for(int i=s2-1,j=0;i>-1;i--,j++)
	{
		n[j]=(int) ( b[i]-'0' );
	}
	if(s1<s2) s1=s2;
	for(int i=0;i<s1;i++) 
	{
			m[i]=m[i]+n[i];
			if(m[i]>=10) 
			{
				m[i]=m[i]-10;
				m[i+1]++;
			}
	}
	s2=0;
	int i=s1;
        while(m[i--]==0&&s2<s1)  s2++;
	for(int i=s1-s2;i>-1;i--) cout <<m[i];
	cout<<endl;
	return 0;
}