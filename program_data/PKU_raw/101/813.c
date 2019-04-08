int main()
{
    int	A=0,B=0,C=0,a=0,b=0,c=0,d[3][3],i=0,j=0,p=0;
	char f[2][2];
	for(A=0;A<3;A++)
		{
			for(B=0;B<3;B++)
			{
				for(C=0;C<3;C++)
			   {  
				d[0][0]=A;d[0][1]=(B>A);d[0][2]=(C==A);
				d[1][0]=B;d[1][1]=(A>B);d[0][2]=(A>C);
				d[2][0]=C;d[2][1]=(C>B);d[2][2]=(B>A);
				for(i=0;i<3;i++)
				{
					if(d[i][0]==2-d[i][1]-d[i][2])
						
					p++;
					
				}
				if(p==3){
					
						if(A>B>C)
					    cout<<"ABC"<<endl;
						if(A>C>B)
							cout<<"ACB"<<endl;
						if(B>A>C)
							cout<<"BAB"<<endl;
						if(B>C>A)
							cout<<"BCA"<<endl;
						if(C>A>B)
							cout<<"CAB"<<endl;

						if(C>B>A)
							cout<<"CBA"<<endl;
				    break;}
			   }
				if(p==3)break;
			}
			if(p==3) break;
	}

			return 0;
}

