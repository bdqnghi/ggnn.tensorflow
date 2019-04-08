int main()
{
	char time1[10000],time2[10000];
	int timein[1000],timeout[1000],sta[1000];
	int i,j=0,k,flag=0,max=0,people=0;
	cin.getline(time1,10000);//???????????
	cin.getline(time2,10000);//???????????
	for(i=0;i<10000;i++)//????
	{
		if(time1[i]==',')
			people++;
		else if(time1[i]=='\0')
			break;
	}
	if(people!=0)
		people++;
	for(i=0;i<1000;i++)//???
	{
		timein[i]=-1;
		timeout[i]=-1;
		sta[i]=0;
	}
	for(i=0;i<10000;i++)//?????????????????
	{
		if(time1[i]==',')
		{
			timein[j]=0;
			for(k=i-1;k>=flag;k--)
			{
				
				timein[j]=timein[j]+(time1[k]-'0')*(int)pow(10.0,(double)(i-1-k));
			}
			flag=i+1;
			j++;
		}
		else if(time1[i]=='\0')
		{
			timein[j]=0;
			for(k=i-1;k>=flag;k--)
			{
				
				timein[j]=timein[j]+(time1[k]-'0')*(int)pow(10.0,(double)(i-1-k));
			}
			break;
		}
	}
	flag=0;j=0;
	
	for(i=0;i<10000;i++)//?????????????????
	{
		if(time2[i]==',')
		{
			timeout[j]=0;
			for(k=i-1;k>=flag;k--)
			{
				
				timeout[j]=timeout[j]+(time2[k]-'0')*(int)pow(10.0,(double)(i-1-k));
			}
			flag=i+1;
			j++;
		}
		else if(time2[i]=='\0')
		{
			timeout[j]=0;
			for(k=i-1;k>=flag;k--)
			{
				
				timeout[j]=timeout[j]+(time2[k]-'0')*(int)pow(10.0,(double)(i-1-k));
			}
			break;
		}
	}

	for(i=0;i<1000;i++)//??????????
	{
		if(timein[i]!=-1)
		{
			for(k=timein[i];k<timeout[i];k++)
				sta[k]++;
		}
		else break;
	}
	for(i=0;i<1000;i++)//???????????
	{
		if(sta[i]>max)
			max=sta[i];
	}
	cout<<people<<" "<<max<<endl;//??
	return 0;
}