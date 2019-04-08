void main()
{
	int a[100]={0},i,j,r=0,t,p=1;
	char s[10000];

	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=',')
		{
		a[r]=a[r]*10+s[i]-48;
		}
		else if(s[i]==',')
			r++;
	}

	for(i=0;i<r+1;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			
			}
		
		}
	}


	if(r==1||a[0]==a[r])
		printf("No");
	else
	{
	
		for(p=1;p<r;p++)
		{
			if(a[0]!=a[p])
				break;
		}
		
		printf("%d",a[p]);
	}


}