int main (){
	int a=0,b=0,c=0;
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)
			{
				if((a+(b>a)+(c==a)==2)&&
				   (b+(a>b)+(a>c)==2)&&
				   (c+(c>b)+(b>a)==2))
				{
					if((a>b)&&(a>c))              //??a=b??????
					{
						if(b>c)cout<<"CBA";       //???if??????????????a>b=c
						if(b<c)cout<<"BCA";       //????????if???
					}
					if((b>c)&&(b>a))
					{
						if(a>c)cout<<"CAB";
						if(a<c)cout<<"ACB";
					}
					if((c>a)&&(c>b))
					{
						if(a>b)cout<<"BAC";
						if(a<b)cout<<"ABC";
					}
				}
			}
}