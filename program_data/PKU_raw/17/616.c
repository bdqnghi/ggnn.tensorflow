int main()
{
	char a[500]={0};
	while(cin.getline(a,200))//???????? 
	{
		cout<<a<<endl;//???? 
		int i,j,l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]==')')//??a[i]?) 
			{ 
			    for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')//??????( 
					{a[i]=a[j]=' ';break;} //???????? 
				}
			} 
			else if(a[i]=='(')continue;//????(,?? 
			else a[i]=' '; //???a[i]???? 
		} 
		for(i=0;i<l;i++)
		{
			if(a[i]=='(')cout<<'$';//???(,??? 
			else if(a[i]==')')cout<<'?'; //???),??$
			else cout<<' ';  
		} 
		cout<<endl; 
	} 
	return 0; 
} 