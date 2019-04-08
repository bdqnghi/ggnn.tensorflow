int X1(int y ,int z)//?????????????????
{
    int j;
    switch (y) //?????????????
    {
      case 1:j = z;break;
      case 2:j = 31 + z;break;
      case 3:j = 59 + z;break;
      case 4:j = 90 + z;break;
      case 5:j = 120 + z;break;
      case 6:j = 151 + z;break;
      case 7:j = 181 + z;break;
      case 8:j = 212 + z;break;
      case 9:j = 243 + z;break;
      case 10:j = 273 + z;break;
      case 11:j = 304 + z;break;
      default:j = 334 + z;break;
    }
    return (j);
}
int X2(int y ,int z)//????????????????
{
    int j;
    switch (y) //?????????????
    {
      case 1:j = z;break;
      case 2:j = 31 + z;break;
      case 3:j = 60 + z;break;
      case 4:j = 91 + z;break;
      case 5:j = 121 + z;break;
      case 6:j = 152 + z;break;
      case 7:j = 182 + z;break;
      case 8:j = 213 + z;break;
      case 9:j = 244 + z;break;
      case 10:j = 274 + z;break;
      case 11:j = 305 + z;break;
      default:j = 335 + z;break;
    }
    return (j);
}
int main()
{
	int y , m, d;
	cin>>y>>m>>d;
	cout<<endl;
	int num;
	if (y%100==0)
	{//?????????
	   if (y%400==0)//???????
	      num=X2(m,d);
	   else  num=X1(m,d);
	}
	else 
	{
	   if (y%4==0)//???????
		 num=X2(m,d);
	   else  num=X1(m,d);
	}
	cout<<num<<endl;
	return 0;
}

