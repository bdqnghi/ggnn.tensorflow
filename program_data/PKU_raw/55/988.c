/*
 * pp5.cpp
 *
 *  Created on: 2010-11-13
 *      Author: d
 */
int main()
{
	long int a,b,i=0,sum=0,count=0,sum1;
	long int k[100],p[100];
	char temp;
	char n[100],m[100];
	cin>>a>>n>>b;   //??
	while(n[i]!='\0')    //????????
	{
		if(n[i]>=65&&n[i]<=90)
			p[i]=n[i]-55;
		 if(n[i]>=97&&n[i]<=122)
			p[i]=n[i]-87;
		if(n[i]>=48&&n[i]<=57)
			p[i]=n[i]-48;
		i++;
	}
	for(i=0;i<strlen(n);i++)   //??????
	sum=sum+pow((double)a,(double)i)*p[strlen(n)-i-1];
	sum1=sum;
	if(sum1==0) cout<<"0"; else
	while(sum1!=0)
	{    sum1/=b;
	     count++;
	}

		  for(i=0;i<count;i++)
		   k[i]=(sum/(int)pow((double)b,(double)i))%b;
		  for(i=0;i<count;i++)    //????????
		  {
		if(k[i]>9)
		m[i]=k[i]+55;
		else m[i]=k[i]+48;
		  }
		  for(i=0;i<(int)(count/2);i++)
		  {temp=m[i];m[i]=m[count-1-i];m[count-1-i]=temp;}
		  for(i=0;i<count;i++)
			  cout<<m[i];
		  cout<<endl;

	return 0;
}
