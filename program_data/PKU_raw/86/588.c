int main()
{
	int n,m,a[60],i,j,k=0,s[1000],t;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m);t=0;
		if(m==0) s[k]=60;
		else
		{
		  for(i=0;i<m;i++)
		  {scanf("%d",&a[i]);}
		   for(i=0;i<m;i++)
		   {
			t=t+i*3+a[i];
			if(t<60) 
			{
				if(i<m-1)
				{t=0;continue;}
				else if(i==m-1)
				{
					if(60-t-3>=0){s[k]=a[i]+60-t-3;break;}
					else {s[k]=a[i];break;}
				}
			}
			else 
			{t=t+a[i-1]-a[i]-3;
			if((60-t-3)<0) {s[k]=a[i-1];break;}
			else {s[k]=a[i-1]+60-t-3;break;}
		   }
		   }
		}k++;
	}
	for(i=0;i<k;i++)
		printf("%d\n",s[i]);
}

            
