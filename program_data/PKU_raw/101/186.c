//****************************
//????????
//??????
//?????2010.11.18
//??????????????
//*****************************
int main ()
{
	int A1,B1,C1,a,b,c;
	int i,j,temp;
	for(A1=1;A1<=3;A1++)
		for(B1=1;B1<=3;B1++)
			for(C1=1;C1<=3;C1++)
			{
				a=(B1>A1)+(C1==A1);
				b=(A1>B1)+(A1>C1);
				c=(C1>B1)+(B1>A1);
				if(((A1>B1&&a<b)||(A1==B1&&a==b)||(A1<B1&&a>b))+((A1>C1&&a<c)||(A1==C1&&a==c)||(A1<C1&&a>c))+((B1<C1&&b>c)||(B1>C1&&b<c)||(B1==C1&&b==c))==3)
				{
					int a[3]={A1,B1,C1};
					for (i =0;i < 3;i++)
						for (j =0;j<2-i;j++)
							if (a[j] > a[j+1])
							{
								temp=a[j];
								a[j] = a[j+1];
								a[j+1] =temp;
							}
					for(i = 0;i < 3;i++) 
					{
						if(a[i] == A1) cout <<"A";
						if (a[i] ==B1) cout << "B";
						if (a[i] ==C1) cout << "C";
					}
					cout << endl;
				}
			}
	return 0;
  }
