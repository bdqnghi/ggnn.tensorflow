int main()
{
	int count[100000]={0},a[100000],i,j,p=0,max=0,len1,len2,m=0,n=0;
	char str1[100000],str2[100000],strx[100000],stry[100000];
	cin.getline(str1,100000);
	cin.getline(str2,100000);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		while(str1[i]>='0'&&str1[i]<='9'&&i<len1)
		{
				strx[m]=str1[i];
				i++;m++;
		}
		strx[m]='\0';
		a[p]=atoi(strx);p++;
		memset(strx,0,100000);
		m=0;
	}
	for(i=0;i<len2;i++)
	{
		while(str2[i]>='0'&&str2[i]<='9'&&i<len2)
		{
				stry[n]=str2[i];
				i++;n++;
		}
		stry[n]='\0';
		a[p]=atoi(stry);p++;
		memset(stry,0,100000);
		n=0;
	}
	for(i=0;i<1000;i++)
	{
		for(j=0;j<p/2;j++)
		{
				if(a[j]<=i&&i<a[j+p/2])
				count[i]++;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(count[i]>max)
			max=count[i];
	}
	cout<<p/2<<" "<<max;
	return 0;
}