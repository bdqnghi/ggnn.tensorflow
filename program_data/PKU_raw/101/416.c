int main()
{
	int a1,b1,c1,s=0;
	int b[4];
	int i,j,k,l,m,n;
	for(i=1;i<=3;i++)
	{ b[1]=i;
		for(j=1;j<=3;j++)
		{
			if(!(j==i))
				b[2]=j;
			for(k=1;k<=3;k++)
			{
				if(!((k==i)||(k==j)))
				b[3]=k;
				a1=((b[2]>b[1])+(b[1]==b[3]));
				b1=((b[1]>b[3])+(b[1]>b[2]));
				c1=((b[3]>b[2])+(b[2]>b[1]));
				if((a1+b[1])==3&&(b1+b[2]==3)&&(c1+b[3])==3)
				{s=1;
					break;
				}
			}
		if(s==1)
			break;
		}
		if(s==1)
			break;
	}
	char a[4]={'Q','A','B','C'};
	for(l=1;l<=3;l++)
	{
       if(b[l]==1)
	  { cout<<a[l];
	  }
    }
	for(m=1;m<=3;m++)
	{
		 if(b[m]==2)
		 {cout<<a[m];
		 }
	}
	for(n=1;n<=3;n++)
	{
		if(b[n]==3)
		{cout<<a[n];
		}
	}
	return 0;
}
