/*
 * qimofuxi8.cpp
 *
 *  Created on: 2010-12-22
 *      Author: l
 */
int main(){
	char a1[10000],a2[10000];
	cin.getline(a1,10000);
	cin.getline(a2,10000);
	int l1,l2,i,j,n=0;
	l1=strlen(a1);
	l2=strlen(a2);//?????????????
	for(i=0;i<l1;i++)
		if(a1[i]==',')
			n=n+1;
	n=n+1;//???????????
	int b1[n],b2[n];
	for(i=0;i<n;i++)
		b1[i]=0;
	j=0;
	for(i=0;i<l1;i++)
		if(a1[i]==',')
			j++;
		else
			b1[j]=b1[j]*10+a1[i]-'0';//???a1???????????b1

	for(i=0;i<n;i++)
			b2[i]=0;
		j=0;
		for(i=0;i<l2;i++)
			if(a2[i]==',')
				j++;
			else
				b2[j]=b2[j]*10+a2[i]-'0';//????a2??????????b2




	int k=0,max=0;
	for(int t=0;t<1000;t++)
	{
		k=0;
		for(i=0;i<n;i++)
			if((b1[i]<=t)&&(b2[i]>t))
				k=k+1;
	if(k>max)
		max=k;//???????
	}
	cout<<n<<" "<<max<<endl;//

	return 0;
}
