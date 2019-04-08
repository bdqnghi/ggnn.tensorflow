int prime(int x)
{   int flag=0;
if(x==1)
return(1);
else  if(x==2||x==3)
		return(0);
	else
	{
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			return (0);
		else
			return (1);
	}
}
int main()
{
	int n,i,m,j,num=0,b[100];
	cin>>n>>m;
	for(i=n;i<=m;i++)
	{   int a[10],count=0,flag=0,l;
	l=i;
	while(l>0)
	{
       a[count++]=l%10;
	   l=l/10;
	   }
	for(j=0;j<count;j++)
	{
		if(a[j]!=a[count-j-1])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0&&prime(i)==0)
	{   
		b[num++]=i;
	}
	}
	if(num==0)
		cout<<"no"<<endl;
	else
	{
		for(i=0;i<num;i++)
		{
			if(i==num-1)
				cout<<b[i]<<endl;
			else
				cout<<b[i]<<",";
		}
	}
	return 0;
}