int hefa_hou(char a)//???????????????????? 
{
    int pan;
    pan=a;
    if (((pan>=65)&&(pan<=90))||((pan>=97)&&(pan<=122))||(pan==95)||((pan>=48)&&(pan<=57))) return 1;//?????????????? 
    else return 0;
}
int hefa_qian(char a)//????????????? 
{
    int pan;
    pan=a;
    if (((pan>=65)&&(pan<=90))||((pan>=97)&&(pan<=122))||(pan==95)) return 1;//??????????? 
    else return 0;}
int main()
{
    int num,i,j,length,count;//num?????i,j?????length????count???? 
    char ming[81];
    cin>>num;
    for(i=0;i<num;i++)
    {
                      cin.get();//???? 
                      cin.get(ming,81);
                      length=strlen(ming);
                      count=0;//?? 
                      for(j=0;j<length;j++)
                      {
                                           if ((j==0)&&(hefa_qian(ming[0]))) count++;//??????? 
                                           if ((j!=0)&&(hefa_hou(ming[j]))) count++;//??????? 
                      }
                      if (count==length) cout<<"1"<<endl;
                      else cout<<"0"<<endl;
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();
    return 0;
}
