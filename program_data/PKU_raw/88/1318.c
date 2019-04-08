int main( )
{    int i,j;
char c[35],*p;
	 gets(c); //?????
	 for(p=c;*p!=0;p++)
	 { if (*p>=48&&*p<=57)           //????????
	 {  for (j=0;1;j++)
	 { if ((*(p+j))>=48&&(*(p+j)<=57))
	{ cout<<*(p+j);}
	 else {cout<<endl; break;}     //?????????????
		 }    
	 p=p+j-1;}
	 }
	return 0;}