int main()
{
int a,b,c,u,v,w,e;
int sum=0;
int i,j,f[3000];
scanf("%d%d%d\n%d%d%d",&a,&b,&c,&u,&v,&w);
e=u-a-1;
switch(b)
{
case 1:sum=28+31+30+31+30+31+31+30+31+30+31+31-c;break;
  case 2:sum=31+30+31+30+31+31+30+31+30+31+28-c;break;
	case 3:sum=30+31+30+31+31+30+31+30+31+31-c;break;
		case 4:sum=31+30+31+31+30+31+30+31+30-c;break;
			case 5:sum=30+31+31+30+31+30+31+31-c;break;
				case 6:sum=31+31+30+31+30+31+30-c;break;
					case 7:sum=31+30+31+30+31+31-c;break;
						case 8:sum=30+31+30+31+31-c;break;
							case 9:sum=31+30+31+30-c;break;
								case 10:sum=30+31+31-c;break;
									case 11:sum=31+30-c;break;
										case 12:sum=0+31-c;break;
}
switch(v)
{
case 12:sum=sum+31+28+31+30+31+30+31+31+30+31+30+w;break;
  case 11:sum=sum+31+28+31+30+31+30+31+31+30+31+w;break;
	case 10:sum=sum+31+28+31+30+31+30+31+31+30+w;break;
		case 9:sum=sum+31+28+31+30+31+30+31+31+w;break;
			case 8:sum=sum+31+28+31+30+31+30+31+w;break;
				case 7:sum=sum+31+28+31+30+31+30+w;break;
					case 6:sum=sum+31+28+31+30+31+w;break;
						case 5:sum=sum+31+28+31+30+w;break;
							case 4:sum=sum+31+28+31+w;break;
								case 3:sum=sum+31+28+w;break;
									case 2:sum=sum+31+w;break;
										case 1:sum=sum+0+w;break;
}

if((a%4==0&&a%100!=0)||(a%400==0)&&(b<=2))
sum=sum+1;
if((u%4==0&&u%100!=0)||(u%400==0)&&(v>=3))
sum=sum+1;
if(e==-1)
{
	if((a%4==0&&a%100!=0)||(a%400==0))
	{sum=sum-366;}
	else{sum=sum-365;}
}
else if(e==0);
else
{
for(i=0;i<e;i++)
{f[i]=a+i+1;}
for(j=0;j<e;j++)
{
	if((f[j]%4==0&&f[j]%100!=0)||(f[j]%400==0))
		sum=sum+366;
	else
		sum=sum+365;
}
}
printf("%d",sum);
return 0;
}
