char Name[5]={' ','z','q','s','l'};
int main()
{
    int a,b,c,d,Res[5],m1,m2,m3,m4;
	for(a=10;a<=50;a=a+10)//?????????????
	{
	   for(b=10;b<=50;b=b+10)
	   {
	   	  for(c=10;c<=50;c=c+10)
	      {
	      	for(d=10;d<=50;d=d+10)
	      	{
	      	  	if(a+b==c+d && a+d>b+c && a+c<b)//???????????
	      	  	{
	      	  		Res[1]=a;//?Res???????????
	      	  		Res[2]=b;
	      	  		Res[3]=c;
	      	  		Res[4]=d;
	      	  	}
	      	}
	      }
	   }
    }
    //???4??????????????????
    int m=0,mNum=0; //m???????????mNum??m????????
    for(int x=1;x<=4;x++)
	{
	    if(m<Res[x]) {m=Res[x];mNum=x;}
    }
    cout<<Name[mNum]<<' '<<Res[mNum]<<endl;
    Res[mNum]=0;
    m=0;
	for(int x=1;x<=4;x++)
	{
	    if(m<Res[x]) {m=Res[x];mNum=x;}
    }
    cout<<Name[mNum]<<' '<<Res[mNum]<<endl;
    Res[mNum]=0;
	m=0;
    for(int x=1;x<=4;x++)
	{
	    if(m<Res[x]) {m=Res[x];mNum=x;}
    }
    cout<<Name[mNum]<<' '<<Res[mNum]<<endl;
    Res[mNum]=0;
	m=0;
    for(int x=1;x<=4;x++)
	{
	    if(m<Res[x]) {m=Res[x];mNum=x;}
    }
    cout<<Name[mNum]<<' '<<Res[mNum]<<endl;

    return 0;
}
