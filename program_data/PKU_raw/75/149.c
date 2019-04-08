/*
 * 1.cpp
 *
 *  Created on: 2011-12-19
 *      Author: 1100012870
 */
int main()
{
	int x[1001]={0},y[1001]={0},a[1001]={0},i,ans,l=1;
	char p;
	p=getchar();
	while(p!='\n'){
		if(p==','){
			p=getchar();
			l++;
		}
		x[l]=x[l]*10+p-'0';
		p=getchar();
	}
	cout<<l<<' ';
	l=1;
	p=getchar();
	while(p!='\n'){
		if(p==','){
			p=getchar();
			l++;
		}
		y[l]=y[l]*10+p-'0';
		p=getchar();
	}
	for(i=1;i<=l;i++){
		for(int j=x[i];j<y[i];j++)
			a[j]++;
	}
	ans=0;
	for(i=0;i<=1000;i++)
		if(ans<a[i])ans=a[i];
	cout<<ans;
	return 0;
}