

int main(int argc, char *argv[])
{
    int a,b;
    a=b=0;
    int num;
    cin >> num;
    int i;
    int keyin;
    for(i=1;i<=num;i++)
    {
          cin >> keyin;
          if(keyin >= a)
          {        
                   b =a;
                   a= keyin;
          }
          else if(keyin >b)
          { 
               b= keyin;
          }
    }
    cout << a <<endl;
    cout << b;
    
    return EXIT_SUCCESS;
}
