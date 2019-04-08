int main()
{
	int n,l1,l2, c[101],d[101];char a[101],b[101];                                       //????????????
	memset(a,0,sizeof(a));memset(b,0,sizeof(b));                                               //??????
	cin >> n;
	while(cin >> a >> b)                                                                           //?????
	{
		int i=0,j=0;
        memset(c,0,sizeof(c));memset(d,0,sizeof(d));
		l1=strlen(a);l2=strlen(b);                                                               //?????????????????
	    for(i=l1-1;i>=0;i--)
		     c[j++]=a[i]-'0';
	    j=0;
	    for(i=l2-1;i>=0;i--)
		     d[j++]=b[i]-'0';
	    for(i=0;i<100;i++)                                                                       //???
		{
	     	c[i+1]--;
	     	c[i]=c[i]+10;
		    c[i]=c[i]-d[i];
	    	if(c[i]>=10)
			{
		    	c[i]=c[i]-10;
	    		c[i+1]=c[i+1]+1;
			}
		}
    	i=100;
    	while(c[i]==0&&i>0)                                                                      //???
    		i--;
    	for(j=i;j>=0;j--)
	    	cout <<c[j];
    	cout << endl;
	};
	return 0;
}