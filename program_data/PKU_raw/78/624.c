/*
 * 9.29?????.cpp
 *
 *  Created on: 2013-9-29
 *      Author: Administrator
 */
int main ()
{int a[4],v,i,j,flag=0;
char c[4]={'z','q','s','l'},cv;
for(a[0]=1;a[0]<=5;a[0]++)
{
	for(a[1]=1;a[1]<=5;a[1]++)
		if(a[1]!=a[0])
		{
			for(a[2]=1;a[2]<=5;a[2]++)
			{
				if((a[2]!=a[1])&&(a[2]!=a[0]))
				{
					for(a[3]=1;a[3]<=5;a[3]++)
						if((a[3]!=a[2])&&(a[3]!=a[1])&&(a[3]!=a[0]&&a[0]+a[1]==a[2]+a[3])&&(a[0]+a[3]>a[1]+a[2])&&(a[0]+a[2]<a[1]))
						{
							flag=1;
							break;
						}
				}
				if(flag)
					break;
			}
			if(flag)
				break;
		}
	if(flag)
		break;
}
for(j=0;j<=2;j++)
	for(i=0;i<=2-j;i++)
		if(a[i+1]>a[i])
		{
			v=a[i]; a[i]=a[i+1]; a[i+1]=v;
			cv=c[i]; c[i]=c[i+1]; c[i+1]=cv;
		}
for(i=0;i<=3;i++)
{cout<<c[i]<<' '<<a[i]*10<<endl;}
return 0;
}
