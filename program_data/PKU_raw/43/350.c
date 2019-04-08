//* ????2??m???
   //* ????
//*****
int susucheck(int a)
{int j;int flag=1;int l;
for(j=2;;j++)
{if(j*j<=a){ l=a/j;if(l*j==a) flag=0; }
else break;}
return flag;
}
int main()
{int m;
cin>>m;
int k;int i;
for(k=2;k<=m/2;k++)
	{if(susucheck(k)&&susucheck(m-k))


	cout<<k<<' '<<m-k<<endl;}
return 0;

}