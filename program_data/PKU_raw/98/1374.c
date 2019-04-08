int main( )
{
	char a[250][45]={'\0'},c;
	int n,i,h,l,countnum;
	cin>>n;
	h=0;
	for(i=0;i<n;i++)
	{
		cin>>*(a+i);
               

		
	}
	countnum=0;
	i=0;
	while(i<n)
	{
		if((countnum+strlen(*(a+i)))<80)
		{
			if(countnum==0)
			{cout<<*(a+i);
			countnum=countnum+strlen(*(a+i));
			i++;}
			else 
			{
				cout<<" "<<*(a+i);
				countnum+=strlen(*(a+i))+1;
				i++;
			}
		}
		else 
		{
			cout<<endl;
			countnum=0;
		}
	}
	
	return 0;
}
