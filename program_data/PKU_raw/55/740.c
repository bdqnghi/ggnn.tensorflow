

int main(int argc, char* argv[])
{
	unsigned int a,b,n;
	char num[100]={0};
	cin>>a>>num>>b;


	int i;
	unsigned int s=0;	
	n=strlen(num);//?????
	for(i=0;i<n;i++)	
	{			
		if(num[i]>='a')
			num[i]=num[i]-87;		
		else if(num[i]>='A')
			num[i]=num[i]-55;
		else
		{
		    num[i]=num[i]-48;
		}
		s=(int)(s+num[i]*pow((double)a,(double)(n-i-1)));//?? 
	}
	//cout<<s<<endl;
	char m[100];
	int j=0;
	for(j=0;s>0;j++)
	{
		  m[j]=s%b;
		  s=s/b;
          if(m[j]>9)
			  m[j]=m[j]+55;
		  else
			  m[j]=m[j]+48;
	}
	if(j == 0 )
		cout<<0;
	else
	for(j=j-1;j>=0;j--)
		cout<<m[j];
	
	  
		  
		  return 0;
}