int main()
{
	int a,b,c,d,e,w[6];
	for(e=1;e<6;e++)
	{
		if(e==2||e==3)
			continue;
		for(d=1;d<6;d++)
		{
			if(d==e)
				continue;
			for(c=1;c<6;c++)
			{
				if(c==d||c==e)
					continue;
				for(b=1;b<6;b++)
				{
					if(b==c||b==d||b==e)
						continue;
					a=15-e-d-c-b;
					w[1]=((a==1||a==2)&&e==1)||(e!=1&&a>2);
					w[2]=(b>1);
					w[3]=((c==1||c==2)&&a==5)||(c>2&&a<5);
					w[4]=((d==1||d==2)&&c>1)||(d>2&&c==1);
					w[5]=(e>3&&d>1);
					if(w[1]+w[2]+w[3]+w[4]+w[5]==5)
					{
						cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}
