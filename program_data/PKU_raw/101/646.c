int main()
{
	int A,B,C,k1,k2,k3;
         char a[3];
	for(A=2;A>=0;A--)
	{
		for(B=2;B>=0;B--)
		{
			if(A==B) continue;
			for(C=2;C>=0;C--)
			{
				if(A==C||B==C) continue;
				 k1=(B>A)+(C==A);
			     k2=(A>B)+(A>C);
				  k3=(C>B)+(B>A);
				  if(((k1-k2)*(A-B)<0)+((k1-k3)*(A-C)<0)+((k2-k3)*(B-C)<0)==3)
				  { a[A]='A';a[B]='B';a[C]='C';
				  cout<<a[0]<<a[1]<<a[2];}
			}
		}
	}
return 0;
}