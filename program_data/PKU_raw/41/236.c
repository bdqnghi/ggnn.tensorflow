int main()
{
	int a=0,b=0,c=0,d=0,e=0;
	int word[6]={0};     //?????????
	for(a=1;a<=5;a++)   //????
	{
		for(b=1;b<=5;b++)
		{
			if(a==b)continue;              //???????????
				for(c=1;c<=5;c++)
				{
					if(a==c||b==c)continue;
					for(d=1;d<=5;d++)
					{
						if(a==d||b==d||c==d)continue;
						e=15-a-b-c-d;
						if(e==2||e==3)continue;         //e??23?
						word[a]=(e==1);
						word[b]=(b==2);
						word[c]=(a==5);
						word[d]=(c!=1);
						word[e]=(d==1);
						if((word[1]+word[2]==2)&&(word[3]+word[4]+word[5]==0))//????
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
					}
				}
		}
	}
      return 0;
}