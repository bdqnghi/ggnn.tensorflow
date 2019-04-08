/*
 * ?7???????.cpp
 *
 *  Created on: 2010-11-12
 *      Author: ???
 */
int main()
{
	int n,i,sum;                          //??n?????i?????sum
	cin>>n;                               //??n
	sum=0;                                //???
	if (n<70)                             //???70????
	{
	   for (i=1;i<=n;i++)
	   {
		    if ((i%7!=0)&&(i%10!=7))
			    sum=sum+i*i;
	   }
	}
	else if (70<=n&&n<80)                 //???70?79
	{
		for (i=1;i<=69;i++)
		{
		    if ((i%7!=0)&&(i%10!=7))
			    sum=sum+i*i;
		}
	}
	else if (n>=80)                      //???????80?
	{
		for (i=1;i<=69;i++)
		{
		    if ((i%7!=0)&&(i%10!=7))
			    sum=sum+i*i;
   	    }
		for (i=80;i<=n;i++)
		{
		    if ((i%7!=0)&&(i%10!=7))
			    sum=sum+i*i;
	    }
	}
	   cout<<sum;                         //??
}