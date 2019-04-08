int main()
{
    int w,i,a;
    cin >> w;
    for(i=1;i<=12;i++)
    {
     switch(i)
     {
           case 1:
                a=w%7;
           break;
           case 2:
                a=(w+31)%7;
            break;
            case 3:
                a=(w+31)%7;
            break;
            case 4:
                a=(w+31*2)%7;
            break;
            case 5:
                a=(w+31*2+30)%7;
            break;
            case 6:
                a=(w+31*3+30)%7;
            break;
            case 7:
                a=(w+31*3+30*2)%7;
            break;
            case 8:
                a=(w+31*4+30*2)%7;
            break;
            case 9:
                a=(w+31*5+30*2)%7;
            break;
            case 10:
                a=(w+31*5+30*3)%7;
            break;
            case 11:
                a=(w+31*6+30*3)%7;
            break;
            case 12:
                a=(w+31*6+30*4)%7;
            break;
     }
           if(a==0)
                {
                    cout << i <<endl;
                }
    }
    return 0;
}
