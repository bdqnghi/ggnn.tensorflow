int year(int y)
{
	if((y%100!=0&&y%4==0)||y%400==0)
		return 2;
	else return 1;
}

int day(int y,int m,int d)
{
	int days=d;
	if((y%100!=0&&y%4==0)||y%400==0)
		switch(m)
	{
		case 1:days+=0;break;
		case 2:days+=31;break;
		case 3:days+=60;break;
		case 4:days+=91;break;
		case 5:days+=121;break;
		case 6:days+=152;break;
		case 7:days+=182;break;
		case 8:days+=213;break;
		case 9:days+=244;break;
		case 10:days+=274;break;
		case 11:days+=305;break;
		case 12:days+=335;break;
	}
	else
		switch(m)
	{
		case 1:days+=0;break;
		case 2:days+=31;break;
		case 3:days+=59;break;
		case 4:days+=90;break;
		case 5:days+=120;break;
		case 6:days+=151;break;
		case 7:days+=181;break;
		case 8:days+=212;break;
		case 9:days+=243;break;
		case 10:days+=273;break;
		case 11:days+=304;break;
		case 12:days+=334;break;
	}
	return days;
}

int main()
{ 
  int y,m,d,i,s=0;
  cin>>y>>m>>d;
  if(y>100000)
	  y=y%400;
  for(i=1;i<y;i++)
	  s+=year(i);
  s=s+day(y,m,d)-1;
  if(s%7==0)
     cout<<"Mon."<<endl;
  if(s%7==1)
     cout<<"Tue."<<endl;
  if(s%7==2)
     cout<<"Wed."<<endl;
  if(s%7==3)
     cout<<"Thu."<<endl;
  if(s%7==4)
     cout<<"Fri."<<endl;
  if(s%7==5)
     cout<<"Sat."<<endl;
  if(s%7==6)
     cout<<"Sun."<<endl;
  return 0;
}