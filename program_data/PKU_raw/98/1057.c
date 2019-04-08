int main()
{
	int i,n;
	char str[500][41]={'\0'};
	int a[500]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		int j;
		cin>>*(str+i);
		for(j=0;*(*(str+i)+j)!='\0';j++);
		*(a+i)=j;
	}
	char c[20][82]={'\0'};
	int s=0,t,s1,j;
	for(i=0;i<20;i++)
	{
		t=0;
		s1=s;
		for(j=s1;j<n;j++)
		{
			for(int m=0;m<a[j];m++)
			{c[i][t]=str[j][m];t++;}
			s++;
			if(t+a[j+1]>=80) break;
			if(s>=n) break;
			c[i][t]=' ';
			t++;
		}
		if(s>=n) break;
	}
	for(int k=0;k<=i;k++)
		cout<<c[k]<<endl;
	return 0;
}