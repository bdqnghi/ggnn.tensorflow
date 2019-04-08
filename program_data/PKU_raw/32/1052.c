
int main()
{
	char num1[101]={0},num2[101]={0};
	int i,j,k=1,n,l;
	cin>>n;
	while(k<=n)
	{
		int anw1[101]={0},anw2[101]={0};
		cin>>num1;
		cin>>num2;
		l=strlen(num1);
		for(j=0,i=strlen(num1)-1;i>=0;i--,j++)
			anw1[j]=num1[i]-'0';
		for(j=0,i=strlen(num2)-1;i>=0;i--,j++)
			anw2[j]=num2[i]-'0';
  
	for(i=0;i<=100;i++)
	{       
		    if(anw1[i]>anw2[i])  
			{ 
				anw1[i]=anw1[i]-anw2[i];
				continue;
			}
			if(anw1[i]<anw2[i])
			{
			
				l=anw1[i]+10-anw2[i];
				anw1[i]=l;
				anw1[i+1]--;
			    continue;
			}
			if(anw1[i]==anw2[i])
			{
				anw1[i]=0;
				continue;
			}
		
	}
	for(i=100;i>=0;i--)
			if(anw1[i]!=0)
			{
				for(j=i;j>=0;j--)
					cout<<anw1[j];
				if (k<n)
					cout<<endl<<endl;
				if(k==n)
					cout<<endl;
				break;
			}
		k++;
	}
	return 0;
}
