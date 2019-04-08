int yz[100],all=0;
int yinzi(int num,int amax)
{
	int i,j=0,geshu=0,key=num;
	if(num==1) return 1;
	else 
	{
		for (i=amax;i<all;i++) 
		{
			if(num%yz[i]==0)
			{
				num=num/yz[i];
				geshu=geshu+yinzi(num,i);
				num=key;
			}
		}
		return geshu;
	}
	return 0;
}
int main ()
{
	int num,n,i,c,j=0,k;
	cin>>n;
	for(k=0;k<n;k++) 
	{
		cin>>num;
		if(num==1) cout<<1<<endl;
		else
		{
			j=0;
			for (i=2;i<=num;i++)
			{
				if(num%i==0)
				{
					yz[j]=i;
					j++;
				}
			}
			all=j;
			cout<<yinzi(num,0)<<endl;
		}
	}
	return 0;
}
