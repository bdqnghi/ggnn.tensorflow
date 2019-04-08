int main()
{
	int A=0,B=0,C=0;
	char d[6]={'0','0','0','0','0','0'};
	int z=0,q=0,s=0,l=0,i=0;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			if(z==q)continue;
			for(s=1;s<=5;s++)
			{
				if(z==s||q==s)continue;
				for(l=1;l<=5;l++)
				{
					A=0;B=0;C=0;
					if(z==l||q==l||s==l)continue;
				
					if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)
					{
						d[z]='z';
						d[q]='q';
						d[s]='s';
						d[l]='l';

					}
				}
			}
		}
	}
	for(i=5;i>0;i--)
	{
		if(d[i]!='0')cout<<d[i]<<" "<<i*10<<endl;
	}
	return 0;
}