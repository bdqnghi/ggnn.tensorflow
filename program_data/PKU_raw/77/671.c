void lashou(char [],int ,int );
int main()
{
	int i,sum;
	char nn[101];
	cin.getline(nn,101);
	for(i=1;nn[i]!='\0';i++)
	{
		if(nn[i]==nn[0]) continue;
		else
		{
			sum=nn[0]+nn[i];
		}
	}
	i--;
	lashou(nn,i,sum);
	return 0;
}
void lashou(char shou[],int n,int sum)
{
	int i,j,k,zhi;
	for(i=0;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if((shou[i]+shou[j])==sum)
			{
				zhi=0;
				for(k=i+1;k<=j-1;k++)
				{
					if(shou[k]!=0) zhi=1;
				}
				if(zhi==0)
				{
				cout<<i<<" "<<j<<endl;
				shou[i]=shou[j]=0;
				lashou(shou,n,sum);
				break;
				}
			}
		}
	}
}