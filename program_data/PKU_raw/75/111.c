struct ren
{
	int x;
	int y;
} a[3000];
int judge(struct ren a,int t)
{
	if(t<a.y&&t>=a.x)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	char line1[200000];
	char line2[200000];
	char b[100];
	int i,j;
	int p=0;
	int num=0;
	int count[1100]={0};
	memset(line1,0,sizeof(line1));
	memset(line2,0,sizeof(line2));
	memset(b,0,sizeof(b));
	cin.getline(line1,200000);
	cin.getline(line2,200000);

	int len1,len2;
	len1=strlen(line1);
	len2=strlen(line2);
	int sum=1;
	for(i=0;i<len1;i++)
	{
		if(line1[i]==',')
			sum++;
	}
	
	for(i=0;i<len1;i++)    
	{
		if(line1[i]!=',')
		{
           b[p]=line1[i];
		   p++;
		}
		else
		{
			a[num].x=atoi(b);
			memset(b,0,sizeof(b));
			p=0;
			num++;
		}
	}
	a[num].x=atoi(b);
    memset(b,0,sizeof(b));
    p=0;
    num=0;
	for(i=0;i<len2;i++)           
	{
		if(line2[i]!=',')
		{
           b[p]=line2[i];
		   p++;
		}
		else
		{
			a[num].y=atoi(b);
			memset(b,0,sizeof(b));
			p=0;
			num++;
		}
	}
	a[num].y=atoi(b);
	for(i=0;i<=1001;i++)
	{
		for(j=0;j<sum;j++)
		{
			if(judge(a[j],i))
				count[i]++;
		}
	}
	int max=0;
	for(i=0;i<1002;i++)
	{
		if(max<count[i])
			max=count[i];
	}
	cout<<sum<<" "<<max<<endl;
	return 0;
}
