//*******************************************
//????5.cpp
//????a??????b??
//?????
//*******************************************

int main()
{
	
	int m,i,dec=0;                            //????
	double temp=0,b,a;                 
	char num[32];                             //???????
	int p[32],q[32];                          //????
	cin>>a>>num>>b;                           //????
	m=strlen(num);                            //??num???
	for(i=0;i<m;i++)
	{
		p[i]=num[i];                          //??????????????
		    if(p[i]<58)                       //??????????
		       p[i]=p[i]-48;
		    else if(p[i]<91)
		       p[i]=p[i]-55;
		    else if(p[i]<123)
	 	       p[i]=p[i]-87;
	}
	    for(i=0;i<m;i++)                       //for?????????
	    {
		 dec+=p[i]*pow(a,m-1-i);
		}	 
		if(dec==0)
			cout<<"0";                          //??????0?????
		else
		{	
			for(i=0;i<32;i++)                   //????b???????
			{
			  temp=pow(b,i);
			  if(temp>dec)
			  {
				m=i;
			    break;
			  }
		    }
            
			q[0]=dec/pow(b,m-1);                 //??b???
			for(i=1;i<m;i++)
			{
			   q[i]=(dec-q[i-1]*pow(b,m-i))/pow(b,m-1-i);
			   dec=dec-q[i-1]*pow(b,m-i);
			}
            for(i=0;i<m;i++)	                  //????????????
			{
			   if(q[i]<10)
		       q[i]=q[i]+48;
			   else q[i]=q[i]+55;
			}
			for(i=0;i<m;i++)	
			   num[i]=q[i];                       //?????????

			num[m]='\0';
		    cout<<num;
		}
			return 0;
}