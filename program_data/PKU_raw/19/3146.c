int main()
{
	char s[200],a[100],b[100],x[200]=" ";
	int i=0,j=0,k=0,count=0,ls,la,lb,l,end=0;
	cin.getline(s,200);
	cin.getline(a,100);
	cin.getline(b,100);
	ls=strlen(s),la=strlen(a),lb=strlen(b);
	while(i<ls) 
	{
		count=0;
		for(j=0;j<la;j++)
		{
			if(s[i+j]!=a[j]) break;
			else count++;
		}
		if((count!=la)||(i!=0&&count==la&&s[i-1]!=' '))
		{
			x[k]=s[i];
			k++,i++;
		}
		else
		{
			i=i+la;
			end=k+lb;
			for(;k<end;k++)
			{
				x[k]=b[k-end+lb];
			}
		}
	}
	cout<<x;
	
}