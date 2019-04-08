int main()
{
	char s[500],c[500],p;
	int i,j,k,l,m,n,o,y[1005],a[1005],b[10005],e;e=0;
	n=0;k=0;
	int h=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{n=i;}
	for(i=0;i<=1003;i++)
	{y[i]=a[i]=b[i]=0;}
	
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		
		{
			a[i]++;
			for(l=0;l<=n;l++)
			{
				if(l<i&&s[i]==s[l])
					b[i]++;
				
			}
			if(b[i]>0)


			{a[i]--;
			}



			else
				
				for(l=0;l<=n;l++)
			
				{ 
					if(l>i&&s[i]==s[l])
			
						a[i]++;
				}



		}


	}
	








	for(i=0;i<=n;i++)
	{
		if(a[i]!=0)
		{y[k]=a[i];c[k]=s[i];k=k+1;}

	}

		for(j=0;j<k-1;j++)
			for(i=0;i<k-1-j;i++)
			{if(c[i]>c[i+1])
			{o=y[i];y[i]=y[i+1];y[i+1]=o;
			p=c[i];c[i]=c[i+1];c[i+1]=p;}
			}





	if(k==0)printf("No");for(i=0;i<k;i++)
	{
	
			printf("%c=%d\n",c[i],y[i]);
	}


}