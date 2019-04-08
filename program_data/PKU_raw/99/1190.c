int main()
{
    int m,n,i;
    int r=0,a=0,t=0,e=0;
    scanf("%d",&m);
    int year[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&year[i]);
    }
    for(i=0;i<m;i++)
    {
        if(year[i]>=1&&year[i]<=18)
        {
            r++;
        }  else if(year[i]>=19&&year[i]<=35){
            a++;
        }   else if(year[i]>=36&&year[i]<=60){
            t++;
        }else {
            e++;
        }
    }
    double rn=1.0*r/m*100,an=1.0*a/m*100,tn=1.0*t/m*100,en=1.0*e/m*100;
    printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\nOver60: %.2lf%\n",rn,an,tn,en);
    return 0;
}
