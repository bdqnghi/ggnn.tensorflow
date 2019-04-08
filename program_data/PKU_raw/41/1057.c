int main()
{
	int A,B,C,D,E,a,b,c,d,e,truth;
	for(int i=1;i<=5;i++)
	{
		a=i;
		for(int j=1;j<=5;j++)
		{
			b=j;
			if(a==b)
				continue;
			for(int k=1;k<=5;k++)
			{
				c=k;
				if((c==a)||(c==b))
					continue;
				for(int p=1;p<=5;p++)
				{
					d=p;
					if((d==a)||(d==b)||(d==c))
						continue;
					e=15-a-b-c-d;
					A=(e==1)&&((a==1)||(a==2));
	                B=(b==2)&&((b==1)||(b==2));
	                C=(a==5)&&((c==1)||(c==2));
	                D=(c!=1)&&((d==1)||(d==2));
	                E=(d==1)&&((e==1)||(e==2));
	                truth=(e!=2)&&(e!=3);
					if((truth==1)&&(A+B+C+D+E==2))
					{
						if(((e==2)&&(e==1))+(d==1)==0)
						cout<<a <<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}

			
