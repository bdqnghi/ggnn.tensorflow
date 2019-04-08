int main( )
{
	int a,b,c;
	for(a=1;a<4;a++)
		for(b=1;b<4;b++)
			for(c=1;c<4;c++)
			{
				if((a+(b>a)+(c==a))==3&&(b+(a>b)+(a>c))==3&&(c+(c>b)+(b>a))==3)  //?????????????????????????
			goto loop;//???????????
			}
loop: if(a>b&&b>c)  //?????
		  cout<<"CBA";
	  else if(a>c&&c>b)
		  cout<<"BCA";
	  else if(c>b>a)
		  cout<<"ABC";
	  else if(c>a>b)
		  cout<<"BAC";
	  else if(b>a>c)
		  cout<<"CAB";
	  else if(b>c>a)
		  cout<<"ACB";
	  	  return 0;
}