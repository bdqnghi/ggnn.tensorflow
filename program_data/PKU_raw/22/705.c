int main()
{
	char s[1500];
	int i,j1,j=1;
	int a[300]={0};
	char c;
	int x=-1,y;
	gets(s);
	for(i=0;s[i]!='\0';i++)
		{
			if(s[i]!=',') a[j]=10*a[j]+s[i]-48;
			else j++;
	    }
	j1=j;
	if(j1==1) printf("No\n");
    else 
	{
		    if(a[1]==a[2]) y=a[1];
		    if(a[1]<a[2]) 
			{
				x=a[1];
			    y=a[2];
		    }
		    if(a[1]>a[2])
		    {
			    x=a[2];
			    y=a[1];
		    }
	        for (j=3;j<=j1;j++)
	        {
		        if(a[j]>y)
				{
					x=y;
			        y=a[j];
		        }
		        if(a[j]<y&&a[j]>x)	x=a[j];
	         }
	    if(x==-1) printf("No\n");
		else printf("%d\n",x);
	}
	return 0;	
}