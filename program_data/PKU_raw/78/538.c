int main()
{
	int i=0,j=0,t=0,k=0,a[6]={0},result[6]={100},temp;
	char name[5]={'0','z','q','s','l'},temp2;
	for(i=1;i<=5;i++)
	{
		a[1]=i;
		for(j=1;j<=5;j++)
		{
			if(j==i)
				continue;
			else
				a[2]=j;
			for(t=1;t<=5;t++)
			{
				if(t==j||t==i)
					continue;
				else
					a[3]=t;
				for(k=1;k<=5;k++)
				{
					if(k==i||k==j||k==t)
						continue;
					else
						a[4]=k;
					if(((a[1]+a[2])==(a[3]+a[4]))&&((a[1]+a[4])>(a[2]+a[3]))&&(a[2]>(a[1]+a[3])))
					{
						result[1]=a[1];
						result[2]=a[2];
						result[3]=a[3];
						result[4]=a[4];
					}
				}
			}
		}
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			if(result[j]<result[j+1])
			{
				temp=result[j];
				result[j]=result[j+1];
				result[j+1]=temp;
				temp2=name[j];
				name[j]=name[j+1];
				name[j+1]=temp2;
			}
		}
	}
	for(i=1;i<=4;i++)
		cout<<name[i]<<" "<<result[i]*10<<endl;
	return 0;
}