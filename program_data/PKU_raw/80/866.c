int X1(int y ,int z)//???????????????????
{
    int j;
    switch (y) //?????????????
    {
      case 1:j = z-1;break;
      case 2:j = 31 + z-1;break;
      case 3:j = 59 + z-1;break;
      case 4:j = 90 + z-1;break;
      case 5:j = 120 + z-1;break;
      case 6:j = 151 + z-1;break;
      case 7:j = 181 + z-1;break;
      case 8:j = 212 + z-1;break;
      case 9:j = 243 + z-1;break;
      case 10:j = 273 + z-1;break;
      case 11:j = 304 + z-1;break;
      default:j = 334 + z-1;break;
    }
    return (j);
}
int X2(int y ,int z)//??????????????????
{
    int k;
    switch (y) //?????????????
    {
      case 1:k = z-1;break;
      case 2:k = 31 + z-1;break;
      case 3:k = 60 + z-1;break;
      case 4:k = 91 + z-1;break;
      case 5:k = 121 + z-1;break;
      case 6:k = 152 + z-1;break;
      case 7:k = 182 + z-1;break;
      case 8:k = 213 + z-1;break;
      case 9:k = 244 + z-1;break;
      case 10:k = 274 + z-1;break;
      case 11:k = 305 + z-1;break;
      default:k = 335 + z-1;break;
    }
    return (k);
}
int main()
{
	int y1,m1,d1,y2,m2,d2,num=0;
    cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	if (y1==y2)//????????
	{
	   if (y1%100==0)//?????????
	   {
	      if (y1%400==0)//???????
			  num=num+X2(m2,d2)-X2(m1,d1);
		  else num=num+X1(m2,d2)-X1(m1,d1);
	   }
	   else 
	   {
	      if (y1%4==0)
			  num=num+X2(m2,d2)-X2(m1,d1);
		  else num=num+X1(m2,d2)-X1(m1,d1);
	   }
	}
	else 
	{
	if (y1%100==0)
	{
	   if (y1%400==0)
	   {
	      num=num+366-X2(m1,d1);
		  for (int t=y1+1;t<y2;t++)//????????????
		  {
			  if (t%100==0)
			  {
			     if (t%400==0)
				 num=num+366;
				 else num=num+365;
			  }
			  else 
			  {
			     if (t%4==0) num=num+366;
				 else num=num+365;
			  }
		  }
		  if (y2%100==0)
		  {
		     if (y2%400==0)
				 num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
		  else 
		  {
		     if (y2%4==0) num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
	   }
	   else 
	   {
	      num=num+365-X1(m1,d1);
		  for (int t=y1+1;t<y2;t++)
		  {
			  if (t%100==0)
			  {
			     if (t%400==0)
				 num=num+366;
				 else num=num+365;
			  }
			  else 
			  {
			     if (t%4==0) num=num+366;
				 else num=num+365;
			  }
		  }
		  if (y2%100==0)
		  {
		     if (y2%400==0)
				 num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
		  else 
		  {
		     if (y2%4==0) num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
	   }
	}
	else 
	{
	   if (y1%4==0)
	   {
	       num=num+366-X2(m1,d1);
		  for (int t=y1+1;t<y2;t++)
		  {
			  if (t%100==0)
			  {
			     if (t%400==0)
				 num=num+366;
				 else num=num+365;
			  }
			  else 
			  {
			     if (t%4==0) num=num+366;
				 else num=num+365;
			  }
		  }
		  if (y2%100==0)
		  {
		     if (y2%400==0)
				 num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
		  else 
		  {
		     if (y2%4==0) num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
	   }
	   else
	   {
	      num=num+365-X1(m1,d1);
		  for (int t=y1+1;t<y2;t++)
		  {
			  if (t%100==0)
			  {
			     if (t%400==0)
				 num=num+366;
				 else num=num+365;
			  }
			  else 
			  {
			     if (t%4==0) num=num+366;
				 else num=num+365;
			  }
		  }
		  if (y2%100==0)
		  {
		     if (y2%400==0)
				 num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
		  else 
		  {
		     if (y2%4==0) num=num+X2(m2,d2);
			 else num=num+X1(m2,d2);
		  }
	   }
	}
	}
	cout<<num<<endl;
	return 0;
}

