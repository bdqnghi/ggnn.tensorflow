/*
 * j3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int runnian(int y);
int main()
{
	int y1,m1,d1,y2,m2,d2,D1=0,D2=0,i,j,p=0,t,t1,t2,a,b;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int tianshu[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<m1-1;i++)
		D1+=tianshu[i];
	for(j=0;j<m2-1;j++)
		D2+=tianshu[j];
	if(y1==y2&&m1==m2)
		cout<<d2-d1;
	else{
		int s1=365*(y2-y1);
		for(i=y1;i<y2;i++)
		{
			t=runnian(i);
			if(t==1)
				p++;
		}
		int s2=s1+p;
		t1=runnian(y1);
		if(t1==1)
		{
			if(m1>=3)
				a=D1+1+d1;
			else a=D1+d1;
		}
		else a=D1+d1;
		t2=runnian(y2);
		if(t2==1)
		{
			if(m2>=3)
				b=D2+1+d2;
			else b=D2+d2;
		}
		else b=D2+d2;
		cout<<s2+b-a<<endl;
	}
		return 0;
}

int runnian(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	return 1;
	else return 0;
}
