int main ()
{
    int a,j=0,k=0;                   //?? 
    cin >>a;
    for  (int i=3;i<=7;i+=2)                         //?????????? 
    {
         if (a%i==0)
         j++;
    }
    if (j==0)                            //??1?? 
    cout <<"n";
    else
    {
        for (int i=3;i<=7;i+=2)                     //??
        {
              if (a%i!=0)                          //?? 
              continue;
              cout <<i;
              k++;                                   //?????????? 
              if (k==j)                              //????? 
              break;
              cout <<" ";
        }
    } 
    //sys//tem ("pause");
    return 0;
}
 
