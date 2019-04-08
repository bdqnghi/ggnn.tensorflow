int main ()
{ 
	int a,b,c;//?????????????char????????
	char A,B,C;
	for(a=1;a<=3;a++)//???????????a,b,c ??
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				int a1=(a<b)+(c==a);
	            int b1=(b<a)+(c<a);
	            int c1=(c>b)+(b>a);
	            if(a==3-a1&&b==3-b1&&c==3-c1)
				{
				  int liang[4]={0};//??????????
				  char ren[4];//?????????????
				  liang[1]=a;
				  liang[2]=b;
				  liang[3]=c;
				  ren[1]='A';
				  ren[2]='B';
				  ren[3]='C';
				  int i,j;//????????????
				  char k;//??????
				  for(j=1;j<=2;j++)//????????
				  {
					  for(i=1;i<=3-j;i++)
					  {
						  if(liang[i]<liang[i+1])
						  {
							 
							  k=ren[i];
							  ren[i]=ren[i+1];
							  ren[i+1]=k;

						  }
					  }
				  }
				  for(int i=3;i>0;i--)//??????
				  {
					  cout<<ren[i];
				  }

				  
				}
	
			}

		}
	}
	return 0;
}