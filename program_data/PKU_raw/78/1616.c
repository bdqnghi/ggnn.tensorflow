/*
 * ???: 1000010191_test3_3.cpp
 * ??: ???
 * ????: 2010-11-20
 * ??: ???
 */


int main()
{
	//z,q,s,l??4????
	for (int z=10;z<=50;z+=10)
		for (int q=10;q<=50;q+=10)
			for (int s=10;s<=50;s+=10)
				for (int l=10;l<=50;l+=10)
					if (z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
						if (z+q==s+l&&z+l>s+q&&z+s<q) //????????
						{
							char d[51]={0}; //????
							d[z]='z';
							d[q]='q';
							d[s]='s';
							d[l]='l';
							for (int i=50;i>=10;i-=10)
								if (d[i]!=0)
									cout<<d[i]<<' '<<i<<endl;
						}
	return 0;						
}
