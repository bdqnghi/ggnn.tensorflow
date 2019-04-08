char a[250],b[250];
int daoxu(char *s, int *x)
{
	int len,i;
	len=strlen(s);
	for(i=0;i<len;i++) x[len-i-1]=s[i]-48;
	for(i=len;i<250;i++) x[i]=0;
	return len;
	}
main()
{
	char a[250],b[250];
	cin>>a>>b;
	int c[250],d[250],m,n,k,i;
	m=daoxu(a,c);
	n=daoxu(b,d);
	for(i=0;i<250;i++)
	{
		c[i]+=d[i];
		if(c[i]>9) 
		{
			c[i+1]++;
			c[i]-=10;
			}
		}
	if(m==1&&n==1&&c[0]+d[0]==0) cout<<"0";
	else
	{
		for(i=249;;i--)
		{
			if(c[i]!=0) 
			{
				k=i;
				break;
				}
			}
		for(i=k;i>=0;i--)
		{
			cout<<c[i];
			}
		}	
	}