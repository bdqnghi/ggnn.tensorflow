int main()
{
	char a[2000]={0},t;
	int b[2000]={0};
	char c[2000]={0};
	int i,cnt=0,j=0;
	while(cin.getline(a,2000))//????
	{	

		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		t=0;
		cnt=0;
		j=0;

		
		t=a[0];
		for(i=0;a[i]!='\0';i++)
		{	

			if(a[i]==t||a[i]+32==t||a[i]-32==t)  //????
			{
				b[j]++;   //??
				if(a[i]>='a'&&a[i]<='z') //???????
					c[j]=a[i]-32;
				c[j]=a[i];
			}		
			else  //?????
			{
				//cout<<t;
				t=a[i];
				j++;
				b[j]=1;
				c[j]=t;
				//cout<<c[j];
				continue;
			}
		}
		for(i=0;c[i]!='\0';i++)
		{
			if(c[i]>='a'&&c[i]<='z')
				c[i]-=32;
			cout<<"("<<c[i]<<","<<b[i]<<")";
		}
		cout<<endl;
	}

//	}
		
	return 0;
}
