int main()
{
	int A,B,C;
	int  d[6][3]={{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,1,2},{3,2,1}};
	for (int i=4;i<6;i++)
	{
		A=d[i][0];
		B=d[i][1];
		C=d[i][2];
		if ((B>A)+(A==C)+(A>B)+(A>C)+(C>B)+(B>A)==3)
		{
			if (A>B &&B>C)
				cout<<"CBA"<<endl;
			else if (A>C &&C>B)
				cout<<"BCA"<<endl;
			else if (B>A &&A>C)
				cout<<"CAB"<<endl;
			else if (B>C && C>A)
				cout<<"ACB"<<endl;
			else if (C>A &&A>B)
				cout<<"BAC"<<endl;
			else if (C>B && B>A)
				cout<<"ABC"<<endl;
		}
	}
	return 0;
}