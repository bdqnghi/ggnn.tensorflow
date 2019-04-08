
int function(int _a[10000],int _b[10000],int num)//?????????????????
{
	int i,j;
	int max,count[1000]={0};
	for(i=0;i<num;i++)//??????????
		for(j=0;j<1000;j++)
			if(_a[i]<=j&&_b[i]>=j+1)count[j]++;
	max=count[0];
	for(i=0;i<1000;i++)//?????
		if(count[i]>max)max=count[i];
	return max;
}


int main()
{
    char a[10000],b[10000];
	int _a[10000],_b[10000];
	int max,len1,len2;
	int i,j=0,num=1,temp=0;
	cin>>a;
	cin>>b;
	len1=strlen(a);
	len2=strlen(b);
    for(i=0;a[i]!='\0';i++)
		if(a[i]==',')num++;
    for(i=0;i<=len1;i++)//????a???int?
	{
		  if(a[i]!=','&&a[i]!='\0')temp++;
		  else 
			{
				switch(temp)
				{
				case 1:{_a[j]=a[i-1]-'0';break;}
				case 2:{_a[j]=10*(a[i-2]-'0')+a[i-1]-'0';break;}
				case 3:{_a[j]=100*(a[i-3]-'0')+10*(a[i-2]-'0')+a[i-1]-'0';break;}
				}
				temp=0;
				j++;
				continue;
			}
	}
	j=0;
	temp=0;
	for(i=0;i<=len2;i++)//????b???int?
		{
			if(b[i]!=','&&b[i]!='\0')temp++;
			else
			{
				switch(temp)
				{
				case 1:{_b[j]=b[i-1]-'0';break;}
				case 2:{_b[j]=10*(b[i-2]-'0')+b[i-1]-'0';break;}
				case 3:{_b[j]=100*(b[i-3]-'0')+10*(b[i-2]-'0')+b[i-1]-'0';break;}
				}
				temp=0;
				j++;
				continue;
			}
		}
	max=function(_a,_b,num);
	cout<<num<<" "<<max<<endl;//??
	return 0;
}
