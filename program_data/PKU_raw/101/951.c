int main()
{
	int a,b,c,a1,b1,c1,p=0,i=3;   //a,b,c???,a1,b1,c1?????p???,?????1 
	for (a=1;a<4;a++)
	{
		for (b=1;b<4;b++)
		{
			for (c=1;c<4;c++)
			{
				a1=(b>a)+(c==a);
				b1=(a>b)+(a>c);
				c1=(c>b)+(b>a);     //??a,b,c???? 
				if ((a1-b1)*(a-b)<0&&(a1-c1)*(a-c)<0&&(b1-c1)*(b-c)<0)
				{
					p=1;
					break;
				}   //????p?1????? 
			}
			if (p==1) break;
		}    //????p?1????? 
		if (p==1) break;
	}        //????p?1????? 
	for(i=1;i<4;i++)
	{
		if(a==i) cout<<"A";
		if(b==i) cout<<"B";
		if(c==i) cout<<"C";
	}
	return 0;
}