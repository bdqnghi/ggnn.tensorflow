int main()
{
	int i=0,a=0,b=0,c=0,d=0;
	int word[4],m[6];
	char n[6]={' ','z','q','s','l'};
	for(i=0;i<=3;i++)
	{
		word[i]=0;
	}
	for(i=0;i<=5;i++)
		m[i]=0;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b) continue;
			for(c=1;c<=5;c++)
			{
				if(a==c||b==c) continue;
				for(d=1;d<=5;d++)
				{
					if(d==a||b==d||c==d) continue;
					word[1]=(a+b==c+d);
					word[2]=(a+d>=b+c);
					word[3]=(a+c<b);
					if(word[1]==1&&word[2]==1&&word[3]==1)
					{
						m[a]=a;
						m[b]=b;
						m[c]=c;
						m[d]=d;
						n[a]='z';
						n[b]='q';
						n[c]='s';
						n[d]='l';
					}
				}
			}
		}
	}
	for(i=5;i>0;i--)
	{
		if(m[i]!=0)
			cout<<n[i]<<" "<<10*m[i]<<endl;
	}
	return 0;
}
