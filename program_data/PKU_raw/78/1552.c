/*
 * b.cpp
 *
 *  Created on: 2012-10-22
 *      Author: user
 */

int main()
{
	int z,q,s,l;
	for (z=1;z<=5;z++){
		for (q=1;q<=5;q++){
			for (s=1;s<=5;s++){
				for (l=1;l<=5;l++){
					if(z+q==s+l&&z+l>s+q&&z+s<q) break;}
			    if(z+q==s+l&&z+l>s+q&&z+s<q) break;}
			if(z+q==s+l&&z+l>s+q&&z+s<q) break;}
		if(z+q==s+l&&z+l>s+q&&z+s<q) break;}
int a[4],i,j,t;char b[5],u;
a[1]=z;a[2]=q;a[3]=s;a[4]=l;
b[1]='z';b[2]='q';b[3]='s';b[4]='l';
for(j=1;j<4;j++)
	for(i=0;i<4-j;i++)
		if(a[i]>a[i+1])
		{t=a[i];a[i]=a[i+1];a[i+1]=t;
		u=b[i];b[i]=b[i+1];b[i+1]=u;}
cout<<b[4]<<" "<<10*a[4]<<endl<<b[3]<<" "<<10*a[3]<<endl<<b[2]<<" "<<10*a[2]<<endl<<b[1]<<" "<<10*a[1];
return 0;

}
