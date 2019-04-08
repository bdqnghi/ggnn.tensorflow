/*
 * qimomoni_1.cpp
 *    3
 *  Created on: 2011-1-8
 *      Author: ???
 */

int main(){
	struct person{
		int a;		//a ????????b????????
		int b;
	}p[10000];
	int i,g=0;
	int a1,a2;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
		{p[i].a=0;
		p[i].b=0;}
	while(1){
		cin>>a1>>a2;
		if((a1==0)&&(a2==0))
			break;
		p[a1].a++;
		p[a2].b++;
	}
         g=0;
	for(i=0;i<n;i++)
		if((p[i].b==n-1)&&(p[i].a==0))
			{cout<<i<<endl;
			g=1;
			break;}
	if(g==0) cout<<"NOT FOUND"<<endl;
	return 0;
}