int pow(int di,int mi)
{
	int k,p=1;
	if(mi>=1)
	{
	    for(k=1;k<=mi;k++)
		{
			p*=di;
		}
	}
	return p;
}
int main()
{
	int a,b,num=0,i,j;
	char n[100];
	int  m[100];
	cin>>a>>n>>b;
	for(i=0;i<=100;i++)
	{
		if(n[i]=='\0')break;
		m[i]=(int)(n[i]);
		if(n[i]<=57&&n[i]>=48)m[i]=m[i]-48;
	    if(n[i]<=90&&n[i]>=65)m[i]=m[i]-55;
		if(n[i]<=122&&n[i]>=97)m[i]=m[i]-87;
	}
    for(j=0;i>=1;j++)
	{
		num=num+m[j]*pow(a,i-1);
		i--;
	}
	if(num==0)cout<<'0'<<endl;
	else
	{
		int q,w;
	    char r[100];
		int t[100];
		for(q=0;q<100;q++)
		{
			if(num==0)break;
			t[q]=num%b;
			num=num/b;
		}
	    for(w=0;q>=1;w++)
		{
			r[w]=(char)(t[q-1]);
			if(0<=t[q-1]&&t[q-1]<=9)r[w]+=48;
			if(10<=t[q-1]&&t[q-1]<=35)r[w]+=55;
			q--;		
		}
	    r[w]='\0';
	    cout<<r<<endl;
	}
	return 0;
}

