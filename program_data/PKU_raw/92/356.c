long sum[1001][1001],s[1001],s1[1001];

long max(long x,long y)
{
	if (x>y) return(x);
	else return(y);
}



void pai(int i,int j)
{
	long i1=i,j1=j,tmp=s[i];
	while(i<j)
	{
		while(i<j && s[j]<tmp)	j--;
		if(i<j)	s[i++]=s[j];
		while(i<j && s[i]>tmp)	i++;
		if(i<j)	s[j--]=s[i];
	}
	s[i]=tmp;
	if(i1<i-1)	pai(i1,i-1);
	if(j+1<j1)	pai(j+1,j1);
}

void pai1(int i,int j)
{
	long i1=i,j1=j,tmp=s1[i];
	while(i<j)
	{
		while(i<j && s1[j]<tmp)	j--;
		if(i<j)	s1[i++]=s1[j];
		while(i<j && s1[i]>tmp)	i++;
		if(i<j)	s1[j--]=s1[i];
	}
	s1[i]=tmp;
	if(i1<i-1)	pai1(i1,i-1);
	if(j+1<j1)	pai1(j+1,j1);
}





void main()
{
  long zong,i=0,j,n,temp,temp1,temp2;
  scanf("%ld",&n);
  while (n!=0)
  {
     for (i=0;i<n;i++)
		 scanf("%ld",&s[i]);
	 for (i=0;i<n;i++)
		 scanf("%ld",&s1[i]);

	 pai(0,n-1);
	 pai1(0,n-1);
	 j=0;

	 if (s[0]>s1[0]) sum[1][n]=1; else if (s[0]==s1[0]) sum[1][n]=0; else sum[1][n]=-1;
	 if (s[n-1]>s1[0]) sum[0][n-1]=1; else if (s[n-1]==s1[0]) sum[0][n-1]=0; else sum[0][n-1]=-1;
	 for (i=1;i<n;i++)
	 {
        for (j=0;j<=i;j++)
		{
          
			if (s[n+j-i-1]>s1[i]) temp=sum[j][n+j-i]+1;
				 else if (s[n+j-i-1]==s1[i]) temp=sum[j][n+j-i];
				  else  temp=sum[j][n+j-i]-1;

	        if (j>0) sum[j][n+j-i-1]=max(temp,sum[j][n+j-i-1]);
			 else sum[j][n+j-i-1]=temp;

			if (s[j]>s1[i]) sum[j+1][n+j-i]=sum[j][n+j-i]+1;
			     else if (s[j]==s1[i]) sum[j+1][n+j-i]=sum[j][n+j-i];
				  else {sum[j+1][n+j-i]=sum[j][n+j-i]-1;}	
		}
	 }
	 zong=sum[1][1];
	 for (i=1;i<=n;i++)
		 if (sum[i][i]>zong) zong=sum[i][i];
	 printf("%ld\n",zong*200);
	 scanf("%ld",&n);
  }
}

