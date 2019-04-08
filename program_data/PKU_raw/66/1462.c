int main()
{
	int str[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,b,a,c=0,n,i,k,sum=0; //y,m,d??????a???????b?y?1?1??????
	cin>>y>>m>>d;
	a=((y-1)-(y-1)%4)/4*2+((y-1)-((y-1)-(y-1)%4)/4)*1;
	for(i=1;i<=(y-y%100)/100;i++)
	{
		if(i%4!=0)sum=sum+1;
		else sum=sum;
	}
	b=(a-sum)%7+1;
	if(y%4!=0||y%100==0&&y%400!=0)str[1]=28;
	else str[1]=29;
	if(m>1)
	{
		for(i=0;i<m-1;i++)
		    c=c+str[i];
	}
	else c=0;
	n=(c+d)%7-1;
	k=(b+n)%7;
    if(k==1)cout<<"Mon."<<endl;
	else if(k==2)cout<<"Tue."<<endl;
	else if(k==3)cout<<"Wed."<<endl;
	else if(k==4)cout<<"Thu."<<endl;
	else if(k==5)cout<<"Fri."<<endl;
	else if(k==6)cout<<"Sat."<<endl;
	else if(k==0)cout<<"Sun."<<endl;
	return 0;
}

