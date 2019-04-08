/*
 * hs.2.cpp
 *
 *  Created on: 2010-11-22
 *      Author: l
 */
int jd(int x)
{if(x==1)
	return 1;
else{
		if(x%2)

		return (x-1)/2;
	else
		return x/2;
		}
}//????jd???x???x?????
int main(){
	int x,y;
	cin>>x>>y;
	int lx=1,ly=1,s,t,p=0;
	int i,j;
	s=x;
	for(lx=1;;lx++)
	{if(s!=1)
		s=jd(s);
	else break;
	}//??x???????
	t=y;//
for(ly=1;;ly++){
	if(t!=1)
		t=jd(t);
	else break;//??y???????
}

s=x;
t=y;
	for(i=1;i<=lx;i++)
	{t=y;
		for(j=1;j<=ly;j++)
		{
			if(s==t)
			{p=1;
				cout<<t<<endl;
	break;	}
		else t=jd(t);}
		if(p)
			break;
	s=jd(s);
	}//?????????????????????????????



	return 0;
}
