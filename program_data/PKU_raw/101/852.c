//??? ??? 20121024 

int main()
{
	int A,B,C;	//???????? 
	for(A=0;A<3;A++)
	for(B=0;B<3;B++)
	for(C=0;C<3;C++)
	if(A!=B&&A!=C&&B!=C)	//?????? 
	{
		int a=(B>A)+(C==A);	//A?? 
		int	b=(A>B)+(A>C);	//B??
		int c=(C>B)+(B>A);	//C?? 
		
		if(a+A==2&&b+B==2&&c+c==2)	//????????????????
		{
			//??????
		for(;;)
		{
				if(A==0)
				{
					cout<<"A";break;	
				}
				
				if(B==0)
				{
					cout<<"B";break;	
				}
				
				if(C==0)
				{
					cout<<"C";break;	
				}	
		}	
		
		for(;;)
		{
				if(A==1)
				{
					cout<<"A";break;	
				}
				
				if(B==1)
				{
					cout<<"B";break;	
				}
				
				if(C==1)
				{
					cout<<"C";break;	
				}	
		}
		
		for(;;)
		{
				if(A==2)
				{
					cout<<"A";break;	
				}
				
				if(B==2)
				{
					cout<<"B";break;	
				}
				
				if(C==2)
				{
					cout<<"C";break;	
				}	
		}	
		return 0;
		} 
	}
}
