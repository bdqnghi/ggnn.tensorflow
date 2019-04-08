int main(void)
{
	int A,B,C;
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{
				if((A+(B>A)+(A==C)==3)&&(B+(A>B)+(A>C)==3)&&(C+(C>B)+(B>A)==3)&&((A-B)*(B-C)*(C-A)!=0))
				{
					if(A>B){if(B>C)cout<<"CBA"<<endl;
										else {if(A>C)cout<<"BCA"<<endl;
										else cout<<"BAC"<<endl;}}
										else {if(A>C)cout<<"CAB"<<endl;
										else {if(B>C)cout<<"ACB"<<endl;
										else cout<<"ABC"<<endl;
										}
										}

									}			}
	return 0;
}
