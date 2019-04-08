 
void  change(char a[1001],int i,int j,int k,char boy,char girl)
{
	
	int l,m,n;
	if(j-i==k-1)
	{
		cout<<"0 "<<k-1;
	    return;
	}
	else
	{
		cout<<i<<" "<<j<<endl;
		a[i]='A';
		a[j]='A';
		for(l=0;l<k;l++)
		{
			if(a[l]==boy)
				{
					for(m=l+1;m<k;m++)
					{	
						if(a[m]=='A')
							continue;
					     if(a[m]==boy)
							{
								l=m-1;
								break;
							}

						 if(a[m]==girl)
							return change(a,l,m,k,boy,girl);
					}
				}
		}
	}
}
int main()
{
	char xpy[1001]={0};
	int i,j;
	cin.getline(xpy,1001);
	char boy=xpy[0],girl=xpy[strlen(xpy)-1];
	for(i=0;i<strlen(xpy);i++)
		if(xpy[i]==boy&& xpy[i+1]==girl)
			change(xpy,i,i+1,strlen(xpy),boy,girl);
	
	return 0;
}

 
