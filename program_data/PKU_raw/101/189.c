int main()                    //?????
{
	int a=0,b=0,c=0;          //??ABC??
	void check(int x,int y,int z);   //???????????
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(a==b)
				continue;
			else
			{
				for(c=0;c<3;c++)
				{
					if(c==a||c==b)
						continue;         //?????????????
					else            
					{
						check(a,b,c);     //????
					}}}}}
	return 0;
}
void check(int x,int y,int z)             //??????
{
	int n1=0,n2=0,n3=0,i=0;
	char rank[3];
	n1=(y>x)+(z==x);
	n2=(x>y)+(x>z);
	n3=(z>y)+(y>x);                       //??????????
	if((n1==2-x)&&(n2==2-y)&&(n3==2-z)) 
	{
		rank[x]='A';
		rank[y]='B';
		rank[z]='C';                      //???????????
	for(i=0;i<3;i++)
		cout<<rank[i];               //????
	}
}
