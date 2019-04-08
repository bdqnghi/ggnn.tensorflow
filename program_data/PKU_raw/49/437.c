//****************************************
//*???????                        **
//*????? 1100013004                     **
//*???2010.11.13                          **
//****************************************
int a,i,j,flag = 1;
void recycle(int,char[]); 
int main() 
{
    int i;
    char str[500];
    cin.getline(str,500); 
    for(i = 2;str[i] != '\0';i++)
          recycle(i,str);
     
} 
void recycle(int a,char str[])
{
            for(i = 0;str[i] != '\0';i++)
            {
				  flag = 1;
                  for(j = 0;j < a;j++)
                  {
                        if(str[i + j] != str[i + a - 1 - j])
                        {
                                 flag = 0;
                                 break;
                        }
                  }
                  if(flag)
                  {
                          for(j = i ;j < i + a;j++)
                              cout<<str[j];
                  }
                  cout<<endl;
            }
return;
}
                  
