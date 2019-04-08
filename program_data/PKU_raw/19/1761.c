int main()
{
	char s[1000],a[1000],b[1000],c[1000];
	int ls,la,lb,i,j,pointer=0,t,m=0,n=0;
	cin.get(s,1000);
	cin>>a;
	cin>>b;
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<ls;i++)
	{
		int counter=0;
		
			for(j=0;j<la;j++)
			{
				if(s[i+j]==a[j])
				{counter++;continue;}
				else
					break;
			}
			if(counter==la&&(s[i]==a[0] &&  (i==0|| s[i-1]==' ')))
			{
				
				for(t=0;t<lb;t++)
				{
					c[pointer]=b[t];
					pointer++;
					
				}
				
		
				i=i+la-1;
            }
			else
			{
				c[pointer]=s[i];
				pointer++;
			}
		
	}
	c[pointer]='\0';
	for(j=0;j<pointer;j++)
		cout<<c[j];
	return 0;
}