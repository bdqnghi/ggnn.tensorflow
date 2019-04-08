/*
 * 2.cpp
 *
 *  Created on: 2012-9-29
 *      Author: 12162
 *      ????????
 */

int i,n;
double a, b, c,j;
double x[2];
int main()
{
	cin>>n;//?????????
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;//????????
		if(b==0)//??0???
		{b=-b;}
		
		j=b*b-4*a*c;

        
        //???????
		if(j>0)
		{
			x[0] = (-b + sqrt(b*b-4*a*c))/(2*a) ;
			x[1] = (-b - sqrt(b*b-4*a*c))/(2*a) ;
			cout<<"x1=";
			printf("%.5f", x[0]);
			cout<<";"<<"x2=";
			printf("%.5f", x[1]);
			cout<<endl;
		}
		if(j==0)
		{
			cout<<"x1=x2=";
			printf("%.5f", -b/(2*a));
			cout<<endl;
		}
		if(j<0)
		{

			cout<<"x1=";
			printf("%.5f", -b/(2*a));
			cout<<"+";
			printf("%.5f",sqrt(4*a*c-b*b)/(2*a));
			cout<<"i"<<";"<<"x2=";
			printf("%.5f", -b/(2*a));
			printf("%.5f",-sqrt(4*a*c-b*b)/(2*a));
			cout<<"i";
			cout<<endl;
		}

	}
return 0;
}