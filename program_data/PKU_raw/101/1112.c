int main()
{
	int i=0,j=0;
	for (i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			for(int k=0;k<=0;k++)
				if ((i!=j)+(i!=k)+(j!=k)==3)
				{
					char a,b,c;
					a=(i<j)+(i==k);
					b=(i>j)+(i>k);
					c=(j<k)+(i<j);
					if((i<j<k)+(a>b>c)==2)
						cout<<"ABC"<<endl;
					if((i<k<j)+(a>c>b)==2)
						cout<<"ACB"<<endl;
					if((j<i<k)+(b>a>c)==2)
						cout<<"BAC"<<endl;
					if((j<k<i)+(b>c>a)==2)
						cout<<"BCA"<<endl;
					if((k<i<j)+(c>a>b)==2)
						cout<<"CAB"<<endl;
					if((k<j<i)+(c>b>a)==2)
						cout<<"CBA"<<endl;
				}
	return 0;
}