int main()
{	char a[200];
    cin.getline(a,200);
    int t=strlen(a);
    for(int i=0;i<t;i++)
    	{if(*(a+i)!=' ')
    	cout<<*(a+i);
    	if(*(a+i)==' '&&*(a+i+1)!=' ')
    	    	{cout<<' ';}
    	if(*(a+i)==' ')
    	{continue;}

    	}
	return 0;
}
