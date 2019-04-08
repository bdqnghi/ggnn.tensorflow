//********************************
//*?????? 1300012809      **
//*???2013.10.31             **
//*????????             **
//********************************
int main ()
{ 
    int i,a,b,jishu,x[1001]={0},y[1001]={0},j,renshu=0,ren=0;
	char xijinping;
	for (i=1;i<=2;i++)                      //???2?????????
	{
		if(i==1)                       
		{
		    jishu=0;
			cin >> a;
			xijinping=cin.get();            //????
		    while (xijinping==',')
			{
                x[jishu]=a;
			    jishu=jishu+1;              //????????
				cin >> a ;
				xijinping=cin.get();
			}
			x[jishu]=a;                     //??????????
			jishu=jishu+1;
		}
		if(i==2)
		{
			jishu=0;                        //???????????y??
			cin >> b ;
			xijinping=cin.get();
			while (xijinping==',')
			{	
				y[jishu]=b;
				jishu=jishu+1;
				cin >> b ;
				xijinping=cin.get();
			}
			y[jishu]=b;
			jishu=jishu+1;
		}
	}
    for (j=0;j<=1000;j++)
	{
		if (ren<renshu) ren=renshu;         //???????????????????????????
		renshu=0;
		for(i=0;i<jishu;i++)
		{
			if (x[i]<=j&&j<y[i]) renshu=renshu+1 ;  //????
		}
	}
    cout << jishu << " " << ren << endl;
    return 0;
}