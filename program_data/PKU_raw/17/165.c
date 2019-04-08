int main()
{
	int len=0,i=0,j=0,sum=0;
	char in[101];
	int sign[101];
	char out[101];
	while(cin>>in)
	{
		len=strlen(in);
		for(i=0;i<len;i++)
			sign[i]=0;
		for(i=0;i<len;i++)
			out[i]=' ';
		out[len]='\0';
		for(i=0;i<len;i++)
		{
			sum=1;
			if(in[i]=='(')
			{
				if(i==len-1)
					out[i]='$';
				else
				{
		     		for(j=i+1;j<len;j++)//??sum=0?????????????????????????????
					{
				     	
				        	if(in[j]=='(')
					        	sum=sum+1;
				        	if(in[j]==')')
					        	sum=sum-1;
							if(sum==0)
							{
						    	sign[j]=1;
					        	break;
							}
					}
				if(sum!=0)
					out[i]='$';
				}
			}
		}
		for(i=0;i<len;i++)
		{
			if(in[i]==')'&&sign[i]==0)
				out[i]='?';
		}
			cout<<in<<endl;
			cout<<out<<endl;

	}
	return 0;
}
//????????????????????????????????
