


int main(int argc, char* argv[])
{


	char a[500]={0},b[500]={0},sum[500]={0};

	int i,j;

	


	

	cin>>a>>b;

	int la=strlen(a),lb=strlen(b);


	for(i=0;i<la/2;i++)
	{
		char temp;
		temp=a[i];a[i]=a[la-1-i];a[la-i-1]=temp;
	}



	for(i=0;i<lb/2;i++)
	{
		char temp;
		temp=b[i];b[i]=b[lb-1-i];b[lb-i-1]=temp;
	}

	for(i=0;i<la;i++) a[i]-='0';
	for(i=0;i<lb;i++) b[i]-='0';

	int carry=0;
	for(i=0;i<500;i++)
	{
		int in=a[i]+b[i]+carry;
		sum[i]=in%10,carry=in/10;
	}

	for(i=499;i>0;i--) 
	{
		if(sum[i]!=0) 
		{break;}
	}

	for(;i>=0;i--)
	{
		printf("%c",sum[i]+'0');
	}






	return 0;
}