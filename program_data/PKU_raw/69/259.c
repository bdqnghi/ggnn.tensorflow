int main()
{
	int i,j=0;
	char a1[300],a2[300];
	int b1[300],b2[300];
	cin.getline(a1,300,'\n');
	cin.getline(a2,300,'\n');
	for(i=0;i<300;i++)
	{
		b1[i]=0;
		b2[i]=0;
	}
	for(i=strlen(a1)-1;i>=0;i--)
		b1[strlen(a1)-i]=a1[i]-'0';
	for(i=strlen(a2)-1;i>=0;i--)
		b2[strlen(a2)-i]=a2[i]-'0';
	for(i=1;i<300;i++)
	{
		b1[i]=b1[i]+b2[i];
		if(b1[i]>9)
		{
			b1[i]=b1[i]-10;
			b1[i+1]=b1[i+1]+1;
		}
	}
	for(i=299;i>=1;i--)
	{
		if(b1[i]!=0)
		{
			j=i;
		    break;
		}
		if(i==1)
		{
			cout<<'0';
		    return 0;
		}
	}
	for(i=j;i>=1;i--)
		cout<<b1[i];
	return 0;
}