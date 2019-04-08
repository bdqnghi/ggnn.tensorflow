int main()
{
    char chuan[101],shuchu[100];
    int count1,count2,length,i,j;
    while(cin>>chuan)
    {
                cout<<chuan<<endl;
                length=strlen(chuan);//????? 
                strcpy(shuchu,chuan);//???????????????? 
                count1=0;
                count2=0;
                for(i=0;i<length;i++)
                {
                                     if(chuan[i]=='(')count1++;
                                     if(chuan[i]==')')
                                     {
                                                      count2++;
                                                      if(count2>count1)
                                                      {
                                                                       shuchu[i]='?'; 
                                                                       count2--;
                                                      }//?????????????????????????????? 
                                     } 
                                     
                }//?????????
                
                count1=0;
                count2=0;
                for(i=length-1;i>=0;i--)
                {
                                     if(chuan[i]==')')count2++;
                                     if(chuan[i]=='(')
                                     {
                                                      count1++;
                                                      if(count1>count2)
                                                      {
                                                                       shuchu[i]='$';
                                                                       count1--;
                                                      }//?????????????????????????????? 
                                     } 
                                     
                }//????????? 
                shuchu[length]='\0';
                for(i=0;i<length;i++)
                {
                                     if(shuchu[i]!='?' && shuchu[i]!='$')shuchu[i]=' ';
                }//????????? 
                cout<<shuchu<<endl; 
                memset(shuchu,0,sizeof(shuchu));
                memset(chuan,0,sizeof(chuan));
    }      
return 0;    
}