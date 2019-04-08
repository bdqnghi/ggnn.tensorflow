int main()
{
	int A=0,B=0,C=0,a=0,b=0,c=0,i=0;
	char rank[3];
	for(A=0;A<3;A++)
	{
		for(B=0;B<3;B++)
		{
			if(A==B)continue;
				C=3-A-B;
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
			if((A+a==2)&&(B+b==2)&&(C+c==2))
			{
				rank[A]='A';
				rank[B]='B';
				rank[C]='C';
			}
		}

	}
	for(i=0;i<3;i++)
	{
		cout<<rank[i];
	}
	cout<<endl;
	return 0;
}


