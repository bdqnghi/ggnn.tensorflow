/*
 * p.cpp
 *
 *  Created on: 2011-12-2
 *      Author: Administrator
 */
int main()
{
	char aa[300],bb[300];
	int a[300],b[300],c[300];
	cin.getline(aa,300);                //??aa?
	cin.getline(bb,300);                //??bb?

	int l1,l2,t=0,step=0,i;
	l1=strlen(aa);
	l2=strlen(bb);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(i=0;i<l1;i++) a[l1-i-1]=aa[i]-'0';           //?aa?????????a?
	for(i=0;i<l2;i++) b[l2-i-1]=bb[i]-'0';           //?bb?????????b?
	while(step<l1 || step<l2){                       //??????
		c[step]=a[step]+b[step]+t;
		t=c[step]/10;
		c[step]=c[step]%10;
		step++;
	}
	if(t>0) c[step++]=t;           //????
	for(i=step-1;i>=0;i--) if(c[i]!=0 || i==0) break;       //????0
	for(;i>=0;i--) cout<<c[i];
	return 0;
}