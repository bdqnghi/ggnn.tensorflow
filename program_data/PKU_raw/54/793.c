/*
 * ditui5.cpp
 *??????
 *  Created on: 2011-11-15
 *      Author: APPLE
 */
int main()                                //?????
{
	int m[1000],n,k,i;                         //????
	cin>>n>>k;
	m[1]=n+k;
    while(1)
	{for(i=1;i<=n;i++)                             //????
		{m[i+1]=(((m[i]-k)/n)*(n-1));
     if(i==n)
    	 break;
	 if((m[i+1]%n)!=k)
		 break;


	}
	if((i==n)&&(m[i+1]/(n-1))>=1)                      //????
		{cout<<m[1]<<endl;
		break;
		}
	else
		m[1]=m[1]+n;

	}
	return 0;                           //?????
	}
