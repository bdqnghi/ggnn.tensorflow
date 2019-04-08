int main()
{ int z =10,q=10,s=10,l=10 ;
  int qq[5];int terp;
  qq[0]=z ,qq[1]=q,qq[2]=s,qq[3]=l;
  int i=1 ,j=1,k=1,v=1 ;
  z=i*10 ;q=j*10 ;s=k*10;l=v*10;
  int m=50,n=40, b=20 ;
  for(;i<6;i++) 
      for(;j<6;j++)
        for(;k<6;k++)
           for(;v<6;v++)
               if( z + q - s - l == 0)
                  if( z + l > s + q)
                	 if(z + s < q )
						 for ( m=0 ;m<=50 ;m++)
							 for(n=0;n<=40 ;n++)
								 for (b=0 ;b<=20 ;b++)
									 if (b>n&&n<m)
									 {	 b+=m;
										 m+=n;
										 n+=b;}

						 cout << endl;
					     cout << 'l' <<' '<<m<<endl;
                         cout << 'q' <<' '<<n<<endl;
		                 cout << 'z' <<' '<<b<<endl;
					     
						 cout << 's' <<' '<<s<<endl;
						
						 return 0;
}

