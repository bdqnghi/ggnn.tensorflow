char str[100];
int sex[100]={0}, flag[100]={0};
int requeue(int n)
{
	if(n==0)
	return 0;
    int i, t, l;
	for(i=0;i<n-1;i++)
	{
		if(sex[i]==0 && sex[i+1]==1)
		{
			cout<<i+flag[i]<<" "<<i+1+flag[i+1]<<endl;
			if(i==n-2)
			break;
			else
			{
    			for(t=i+2; t<n; t++)
    			{
    				sex[t-2]=sex[t];
    				flag[t]+=2;
    			}
    			for(t=i;t<n-2;t++)
    			{
                    flag[t]=flag[t+2];              
                }
			    break;
            }
		}
	}	
	return requeue(n-2);
}
int main()
{
	int j, len;
	cin.getline(str,100);
	len=strlen(str);
	for(j=1; j<len; j++)
	{
		if(str[j]==str[0])
		    sex[j]=0;
		else sex[j]=1;
	}
	requeue(len);
	return 0;
}
