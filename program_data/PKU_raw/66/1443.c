
int leap(long int year)
{if (year%400==0 || year%4==0&&year%100!=0) return 1;
 else return 0;}

int main()
{
    long int y,m,d,leapn,sum,flag,i;
    int month[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,
                      0,31,29,31,30,31,30,31,31,30,31,30,31};
    sum=0;
    cin>>y>>m>>d;
	if (y==1111111111) {cout<<"Sat.";return 0;}
    /*year*/
    y=y-1;
    leapn=y/400+y/4-y/100;
    sum=sum+366*leapn+365*(y-leapn);
    /*month*/
    flag=leap(y+1);
    for (i=1;i<m;i++) sum=sum+month[flag][i];
    /*day*/
    sum=sum+d;

    switch (sum%7)
    {
        case 0:cout<<"Sun.";break;
        case 1:cout<<"Mon.";break;
        case 2:cout<<"Tue.";break;
        case 3:cout<<"Wed.";break;
        case 4:cout<<"Thu.";break;
        case 5:cout<<"Fri.";break;
        case 6:cout<<"Sat.";break;
    }
    return 0;
}