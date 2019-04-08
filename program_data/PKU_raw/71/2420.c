int runyue(int n)
{
	int c=n;
	int a;
	if((n==12)||(n==9))a=6;
	if((n==1)||(n==4)||(n==7))a=7;
	if((n==11)||(n==3))a=4;
	if((n==2)||(n==8))a=3;
	if((n==5))a=2;
	if((n==6))a=5;
	if(n==10)a=1;
	return(a);
}
int burun(int n)
{int c=n;
 int a;
 if((n==1)||(n==10))a=2;
 if((n==2)||(n==3)||(n==11))a=5;
 if((n==4)||(n==7))a=1;
 if(n==5)a=3;
 if(n==6)a=6;
 if(n==8)a=4;
 if((n==9)||(n==12))a=7;
 return(a);
}
int run(int n)
{
int a=n;
int b;

if((a%100)==0) {if((a%400)==0)
b=1;
else b=0;}
else
{
if((a%4)==0)
b=1;
else b=0;}
return b;
}
int main()
{
int k;
cin>>k;
for(int i=0;i<k;i++)
{
int a;
cin>>a;
a=run(a);
int d,e;
cin>>d>>e;
//cout<<d<<e;
	if(a==1)//runnian
	{
		d=runyue(d);
		e=runyue(e);
		if((d-e)==0)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	if(a==0)//bushirunnian
	{
		d=burun(d);
		e=burun(e);
		if((d-e)==0)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	
	}

}
return 0;
}