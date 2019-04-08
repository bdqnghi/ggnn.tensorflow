int main()
{
	char n[32],t[32];
	double a,b;
	int i,m[32],c[32],d[32],size,k;
	long n10=0;
	cin>>a>>n>>b;
	size=strlen(n);
	for(i=0;i<size;i++)
		if(toascii(n[i])>=48&&toascii(n[i])<=57)
			m[i]=toascii(n[i])-48;
		else if(toascii(n[i])>=65&&toascii(n[i])<=90)
			m[i]=toascii(n[i])-55;
		else if(toascii(n[i])>=97&&toascii(n[i])<=122)
			m[i]=toascii(n[i])-87;
		for(i=0;i<size;i++)
		n10=n10+m[i]*pow(a,size-i-1);
if (n10==0)
cout << 0 << endl;
	for(i=0;i<32;i++)
		if(pow(b,i)>n10)
		{
			k=i;
			break;
		}
		c[0]=n10/pow(b,k-1);
			for(i=1;i<k;i++)
				{
					n10=n10-c[i-1]*pow(b,k-i);
			        c[i]=n10/(pow(b,k-1-i));
			    }
				for(i=0;i<k;i++)
					if(c[i]<10) d[i]=c[i]+48;
					else if (c[i]>=10) d[i]=c[i]+55;
					for(i=0;i<k;i++)
						t[i]=d[i];
					t[k]='\0';
					cout<<t;
	return 0;
}