int main()
{
	char a[55]={'\0'};
	int i=0,j=0,count=0,k1=0,k2=0,l=0,num=0,m=0;
	char c=getchar();
	while('\n'!=c)
	{
		a[i]=c;
		i++;
		c=getchar();
	}
	count=i;//???????????????
	for(i=2;i<=count;i++)
	{
		for(j=0;j<=count-i;j++)
		{
			num=0;
			char b[55]={'\0'},d[55]={'\0'};
			for(k1=j;k1<i+j;k1++)
				b[k1]=a[k1];
			for(k2=j;k2<i+j;k2++)
				d[k2]=a[i+j-k2-1+j];//????2????????????????
			for(l=j;l<i+j;l++)
			{
				if(b[l]==d[l])
					num++;
			}
			if(num==i)
			{
				for(m=j;m<i+j;m++)
					cout<<b[m];
				cout<<'\n';
			}
			else
				continue;
		}//????????????????
	}

	return 0;
}