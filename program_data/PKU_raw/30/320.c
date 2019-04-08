/*
 * qizhonglianxi_5.cpp
 *????7???????
 *  Created on: 2010-11-15
 *      Author: ??
 */

int main(){
	int a[100],i,n,s=0;
	cin>>n;
	for(i=0;i<n;i++)
		{a[i]=i+1;
		 if(a[i]%7==0) a[i]=0;
		 else
		  {if((a[i]==7)||(a[i]==17)||(a[i]==27)||(a[i]==37)||(a[i]==47)||(a[i]==57)||(a[i]==67)||(a[i]==77)||(a[i]==87)||(a[i]==97)||(a[i]==70)||(a[i]==71)||
				  (a[i]==72)||(a[i]==73)||(a[i]==74)||(a[i]==75)||(a[i]==76)||(a[i]==78)||(a[i]==79))
		   a[i]=0;}
		 s=s+a[i]*a[i];
		}
cout<<s<<endl;
return 0;
}
