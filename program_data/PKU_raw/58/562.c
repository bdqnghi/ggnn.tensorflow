int main()
{   
   char Char[100][100]={0};   //??????????
   int i=0;             
      //?????i
   int n=0;                 //??????n
   int k=0;                    //?????K
   cin>>n;
   cin.get();
    for (k=0;k<n;k++)           //????
      { cin.getline(Char[k],100,'\n');}

       for (k=0;k<n;k++)    //?????????
           {
              if (Char[k][0]<='Z'&&Char[k][0]>='A'||Char[k][0]<='z'&&Char[k][0]>='a'||Char[k][0]=='_') // ???????????????
                 {for (i=1;i<100;i++)
                    {  if ( Char[k][i]==0)          //???????????????????1
                        {cout<<1<<endl;
                                 break;
                        }
                       if ((Char[k][i]<='Z'&&Char[k][i]>='A')+(Char[k][i]<='z'&&Char[k][i]>='a')+(Char[k][i]<='9'&&Char[k][i]>='0')+(Char[k][i]=='_')==0)   //?????0
                        { 
                          cout<<0<<endl;
                                  break;
                        }

         
                    }
                 }
             else               //????????????????????0
                  { cout<<0<<endl;}
          }
return 0;
}
