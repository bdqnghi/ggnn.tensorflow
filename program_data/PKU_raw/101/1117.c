int main()
{
	int a, b, c, A, B, C;
	for(a=1 ; a<=3 ; a++)
	{
		for(b=1 ; b<=3 ; b++)

		{
			for(c=1 ; c<=3 ; c++)
			{
               if( a==b || a==c || b==c )
            	   continue;
			   A = ( b > a ) + ( c == a ) ;
               B = ( a > b ) + ( a > c  ) ;
               C = ( c > b ) + ( b > a  ) ;
               if(A==(3-a)&&B==(3-b)&&C==(3-c))

               {  if(a==1)
                  	cout<<"A";
                  if(b==1)
                  	cout<<"B";
                  if(c==1)
                  	cout<<"C";
                  if(a==2)
                  	cout<<"A";
                  if(b==2)
                      	cout<<"B";
                  if(c==2)
                      	cout<<"C";
                  if(a==3)
                      	cout<<"A";
                  if(b==3)
                      	cout<<"B";
                  if(c==3)
                      	cout<<"C";
               }


            }


		}


	}

return 0;
}
