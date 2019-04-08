int main()//?????
{
	char n[32],t[32];
	double a,b;
	int i,m[32],c[32],d[32],size,k;
	long n10=0;//????
	cin>>a>>n>>b;//??a,n,b
	size=strlen(n);//??n???
	for(i=0;i<size;i++)
		if(toascii(n[i])>=48&&toascii(n[i])<=57)
			m[i]=toascii(n[i])-48;
		else if(toascii(n[i])>=65&&toascii(n[i])<=90)
			m[i]=toascii(n[i])-55;
		else if(toascii(n[i])>=97&&toascii(n[i])<=122)
			m[i]=toascii(n[i])-87;//?n10??????????
		for(i=0;i<size;i++)
		n10=n10+m[i]*pow(a,size-i-1);//??n10????long???
		if(n10==0)
			cout<<"0";//?n10=0?????0
		else
			 {
				 for(i=0;i<32;i++)
		       if(pow(b,i)>n10)
		         {
			       k=i;
		 	       break;
		         }//??n10?b?????k?
		    c[0]=n10/pow(b,k-1);//???????1?c[0]
			for(i=1;i<k;i++)
				{
					n10=n10-c[i-1]*pow(b,k-i);
			        c[i]=n10/(pow(b,k-1-i));
			    }//???????2??k?c[1]?c[k-1]
			for(i=0;i<k;i++)
					if(c[i]<10) d[i]=c[i]+48;
					else if (c[i]>=10) d[i]=c[i]+55;//?c[i]????????ascii?
					for(i=0;i<k;i++)
						t[i]=d[i];//t[i]?????
					t[k]='\0';//t[k]???
					cout<<t;//??b???t
		}
	return 0;
}//?????