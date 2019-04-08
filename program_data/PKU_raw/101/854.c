int main()                                                    //?????
{

	for(int A=0 ; A<3 ; A++)                                  //??A B C?????
	{
		for(int B=0 ; B<3 ; B++) 
		{
			for(int C=0 ; C<3 ; C++)
			{
				int a=0;                                      //??????a,b,c
			    int b=0;
				int c=0;
				if(B>A)                                       //??A????????
					a++;
				if(C==A)                                     
					a++;
				if(A>B)                                       //??B????????
					b++;
				if(A>C)                                         
					b++;
				if(C>B)                                       //??C????????
					c++;
				if(B>A)                                       
					c++;
				if(((A==B && a==b) || ((A-B)*(a-b)<0)) && ((A==C && a==c) || ((A-C)*(a-c)<0)) && ((B==C && b==c) || ((B-C)*(b-c)<0)))  //????????????????????
				{
					int p;
					int a[10];                                //????????a
					char b[10];                               //?????????b
					char k;                                   //????k
					a[0]=A;                                   //?A,B,C????a??
					a[1]=B;
					a[2]=C;
					b[0]='A';                                 //?A,B,C??????b??
					b[1]='B';
					b[2]='C';
					for(int i = 0 ; i < 3 ; i++)              //?A,B,C?????
					{
						for(int j = i+1 ; j < 3 ; j++)
						{
							if(a[i]>a[j])
							{
								p=a[i];
								a[i]=a[j];
								a[j]=p;

								k=b[i];
								b[i]=b[j];
								b[j]=k;
								
							}
						}
					}
					cout<<b[0]<<b[1]<<b[2]<<endl;            //????

				}
					

			}
		}
	}
      return 0;                                             //???????????????????

}

