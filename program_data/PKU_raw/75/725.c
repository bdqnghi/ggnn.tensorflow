/*
 * main.cpp
 *
 *  Created on: 2012-11-16
 *      Author: ??
 *      ?????
 */


int main()
{
	char str1[5000],str2[5000];
	int a[1010][3];
	int k1=0,k2=0,l1,x,y,s=0,max=0,i,l2,t,j,m1=0,m2=2000;

	cin>>str1>>str2;l1=strlen(str1);l2=strlen(str2);
	while (k1<l1)
	{
        x=0;y=0;s++;
		while ((str1[k1]!=',')&&(k1<l1)) {x=x*10+str1[k1]-48;k1++;}
		while ((str2[k2]!=',')&&(k2<l2)) {y=y*10+str2[k2]-48;k2++;}
        a[s][1]=x;a[s][2]=y;
        if (m1>x) x=m1; if(m2<y) y=m2;
		k1++;k2++;
	}
    cout<<s<<' ';
	for (i=m1;i<=m2;i++)
	{
		t=0;

		for (j=1;j<=s;j++)
			if ((a[j][1]<=i)&&(a[j][2]>i)) t++;
		if (t>max) max=t;
	}
	cout<<max<<endl;
	return 0;
}