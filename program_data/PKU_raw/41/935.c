int main()
{
	int sum=0,t[5];
for(int a=1;a<=5;a++)
{
	t[0]=a;
	for(int b=1;b<=5;b++)
	{
		t[1]=b;
		if(a==b)
			continue;
		for(int c=1;c<=5;c++)
		{
			t[2]=c;
			if(c==b || c==a)
				continue;
			for(int d=1;d<=5;d++)
			{
				t[3]=d;
				if(d==a || d==b || d==c)
					continue;
				int e=15-a-b-c-d;
				t[4]=e;
				if(e !=2 && e !=3)
				{
					int h[5];
					h[0]=(e==1);
					h[1]=(b==2);
					h[2]=(a==5);
					h[3]=(c>1);
					h[4]=(d==1);
					if((e==1)+(b==2)+(a==5)+(c>1)+(d==1)==2)
					{
						sum=0;
						for(int i=0;i<=4;i++)
						{
							
							if(h[i]==1 &&( t[i]==1 || t[i]==2))
							{
								sum=sum+1;
							}
						}
						if(sum==2)
						{
							for(int i=0;i<=3;i++)
							{
								cout<<t[i]<<" ";
							}
							cout<<t[4];
						}
					}
				}
			}
		}
	}
}
return 0;
}