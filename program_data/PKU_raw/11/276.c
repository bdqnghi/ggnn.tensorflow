int main()
{
int year[5],month[5],day[5],m,tianshu,i;
for(i=0;i<=4;i++)
{scanf("%d%d%d",&year[i],&month[i],&day[i]);}
for(i=0;i<=4;i++)
{switch(month[i])
        {case 1:m=0;break;
	case 2:m=31;break;
	case 3:m=59;break;
        case 4:m=90;break;
	case 5:m=120;break;
	case 6:m=151;break;
	case 7:m=181;break;
	case 8:m=212;break;
	case 9:m=243;break;
	case 10:m=273;break;
	case 11:m=304;break;
	case 12:m=334;break;}
        if((year[i]%400==0)||(year[i]%4==0&&year[i]%100!=0)) 
	      if (m>31)m=m+1;
tianshu=m+day[i];
printf("%d\n",tianshu);}
return 0;
}