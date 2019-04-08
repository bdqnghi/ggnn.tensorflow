int main()
{
	int num[1000],len1,len2,i,j,k,sp=0,p=0,max=0,max1,a[1000];			//??????????????????????????
	int entry[1000],depart[1000];									//?????????
	char str1[10000],str2[10000],temp[5];							//????????????
	cin>>str1;
	len1=strlen(str1);
	for(i=0;i<=len1;i++)											//?????????
	{
		if(str1[i]==',')
		{
			k=0;
			memset(temp,'\0',sizeof temp);
			for(j=sp;j<i;j++)
				temp[k++]=str1[j];
			entry[p]=atof(temp);
			p+=1;
			sp=i+1;
		}
		else if(str1[i]=='\0')
		{
			k=0;
			memset(temp,'\0',sizeof temp);
			for(j=sp;j<i;j++)
				temp[k++]=str1[j];
			entry[p]=atof(temp);
			sp=0;
			p=0;
		}
		else
			continue;
	}
	cin>>str2;
	len2=strlen(str2);
	for(i=0;i<=len2;i++)											//?????????
	{
		if(str2[i]==',')
		{
			k=0;
			memset(temp,'\0',sizeof temp);
			for(j=sp;j<i;j++)
				temp[k++]=str2[j];
			depart[p]=atof(temp);
			p+=1;
			sp=i+1;
		}
		else if(str2[i]=='\0')
		{
			k=0;
			memset(temp,'\0',sizeof temp);
			for(j=sp;j<i;j++)
				temp[k++]=str2[j];
			depart[p]=atof(temp);
			p+=1;
			cout<<p;
		}
		else
			continue;
	}
	for(i=0;i<p;i++)														//?????????
	{
		if(max<depart[i])
			max=depart[i];
	}
	memset(a,0,sizeof a);
	memset(num,0,sizeof num);
	for(j=0;j<max;j++)
	{
		a[j]=j+1;
		for(i=0;i<p;i++)
		{
			if(a[j]<depart[i]&&a[j]>=entry[i])
				num[j]+=1;													//???????????
		}
	}
	max1=0;
	for(i=0;i<max;i++)
		if(max1<num[i])
			max1=num[i];														//????????????
	cout<<" "<<max1;
	return 0;
}