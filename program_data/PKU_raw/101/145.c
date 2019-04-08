int main()
{    
	char Rank[3];                                                                       //????Rank??A,B,C?????          
	int A,B,C,Word[3],i=1;                                                             //????Word??A,B,C????????
	for(A=1;A<4;A++)                                                                    //??????
		for(B=1;B<4;B++)
			if(B!=A)
			{
				C=6-A-B;
				Word[A-1]=(A<B)+(A==C);
				Word[B-1]=(A>B)+(A>C);
				Word[C-1]=(C>B)+(B>A);
				Rank[A-1]='A';
				Rank[B-1]='B';
				Rank[C-1]='C';
			    if((A+Word[A-1]==3)&&(B+Word[B-1]==3)&&(C+Word[C-1]==3))      //???????????3???????
				{for(i=1;i<4;i++)                                          //??????3?????
				 cout<<Rank[i-1];}
			}
	return 0;
}
