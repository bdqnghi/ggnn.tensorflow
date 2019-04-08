int main()
{
	int a,b,c,a1,b1,c1,a2,b2,c2,sum1,sum2,sum3,find;
	for(a=0;a<=2;a++)
	{if(find==1)
			{break;}
		for(b=0;b<=2;b++)
		{if(find==1)
			{break;}
			for(c=0;c<=2;c++)
			{
				
                a1=b>a;
				a2=a==c;
				b1=a>b;
				b2=a>c;
				c1=c>b;
				c2=b>a;
               sum1=a1+a2;
			   sum2=b1+b2;
			   sum3=c1+c2;
			   
				   if(a>=b&&a>=c&&b>=c&&sum1<=sum2&&sum1<=sum3&&sum2<=sum3)
				   {
					   cout<<"ABC",find=1;break;
				   }
				   else if(a>=c&&a>=b&&c>=b&&sum1<=sum3&&sum1<=sum2&&sum3<=sum2)
				   {
					   cout<<"ACB",find=1;break;
                   }
				   else if(b>=c&&b>=a&&a>=c&&sum2<=sum3&&sum2<=sum1&&sum1<=sum3)
				   {
					   cout<<"BAC",find=1;break;
                   }
				   else if(b>=c&&b>=a&&c>=a&&sum2<=sum3&&sum2<=sum1&&sum3<=sum1)
				   {
					   cout<<"BCA",find=1;break;
                   }
				   else if(c>=a&&c>=b&&a>=b&&sum3<=sum1&&sum3<=sum2&&sum1<=sum2)
				   {
					   cout<<"CAB",find=1;break;
                   }
				   else if(c>=a&&c>b&&b>=a&&sum3<=sum1&&sum3<sum2&&sum2<=sum1)
				   {
					   cout<<"CBA",find=1;break;
                   }
			   
			}
		}
	}
 

     
				
				
				
				
				
				return 0;
}
     
        



	
	
	
	