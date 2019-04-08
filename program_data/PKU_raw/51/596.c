int main()
{
	int n,i,k,j=0,max=0,sum[500]={0};
	char str[500],smallstr[500][5];
	cin >> n;
	cin >> str;
	char *p=str,*q;
	for( ;p<=str+strlen(str)-n;p++)
	{
		q=smallstr[j];
		for(i=0;i<n;i++)
			*q++=*p++;
		*q='\0';
		p=p-n;
		j++;
	}
	for(i=0;i<j-1;i++)
	{
		for(k=i+1;k<j;k++)
		{
			if(strcmp(smallstr[i],smallstr[k])==0)sum[i]=sum[i]+1;
		}
	}
	for(i=0;i<j-1;i++)
		max=(max>=sum[i]?max:sum[i]);
	if(max==0)cout<<"NO"<<endl;
	else 
		{
			cout<< max+1 <<endl;
			for(i=0;i<j-1;i++)
		    if(sum[i]==max)
					cout<<smallstr[i]<<endl;
	    }
    return 0;
}