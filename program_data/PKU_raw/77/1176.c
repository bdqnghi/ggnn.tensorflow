//***********************************************************************
//??????? 
//??????? 
//??????
//***********************************************************************
void turn(int n, char a[]);                 //????turn 
int main()                                  //??? 
{
    char str[101], g, b;
    int c = 1, p[101] = {0};
    str[0] = cin.get();
    b = str[0];
    for(int i = 1; i < 101; i ++)
    {
            str[i] = cin.get();
            if(str[i] != str[0] && str[i] != '\n')
            { 
                      g = str[i];
                      p[i] = 1;
            } 
            if(str[i] == '\n')
                      break; 
            c++;
    }
    for(int i = 1; i < c; i++)
    {
            if(str[i] == g)
            {
                      for(int j = i - 1; j >= 0; j--) 
                      if(p[j] == 0)
                      {
                           cout<<j<<" "<<i<<endl;
                           p[j] = 1;
                           break;
                      }
            }
    }
    return 0;
}  
