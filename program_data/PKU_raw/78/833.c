int main()
{
	int z,q,s,l;//?????
	int a,b,c;//????
	int w[6]={0};//????????
	char r[6]={0};//????
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)//??
				{
					a=(z+q==s+l);
					b=(z+q>q+s);
					c=(z+s<q);
					if((a+b+c)==3)//????
					{
						w[z]=z*10;r[z]='z';
						w[q]=q*10;r[q]='q';
						w[s]=s*10;r[s]='s';
						w[l]=l*10;r[l]='l';
					}//??
					
				}
			}
		}
	}
	{
		for(int i=5;i>=1;i--)
			if(w[i]!=0)
				cout<<r[i]<<" "<<w[i]<<endl;//??
	}
	return 0;
}