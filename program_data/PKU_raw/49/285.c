/**
 * ???8.cpp
 * ??????
 * ???10.12.31
 * ?????????
 */
void find(int,int,char *);
int main()
{
	char a[500];
	cin>>a;
	int la;
	la=strlen(a);
	find(1,la,a);                 //???????
	return 0;
}
void find(int n,int la,char a[])
{
	if(2*n<=la)
	{
	    int i,j,c,t;
      	for(i=0;i<la;i++)
		{
			t=0;                //t??????????
			c=0;                 //c??????
			 for(j=0;j<n;j++)
			 {
				 if(a[i-j]==a[i+1+j])      //???????
				 {
					 c++;
					 if(c==n) 
					 {
						 t=1;
						 break;
					 }
				 }
				 else
					 break;
			 }
			 if(t==1)
			 {
				 for(j=i-n+1;j<i+n+1;j++)    //?????????
					 cout<<a[j];
				 cout<<endl;
			 }
		}
		find(n+1,la,a);            //??
	}
}


