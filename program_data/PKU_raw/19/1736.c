int main()
{
int Judge=0;
int W=0;
int Temp=0;
int M=0;
int Num_of_Origin;
int Start=101;
int k=0;
int Num_of_Change=0;
int Num_of_Changed=0;
int i=0;
char Change[100]={0};
char Changed[100]={0};
char Origin[100]={0};

gets (Origin);

gets (Changed);

gets (Change);
  for (i=0;i<100;i++)
    {if (Changed[i]==0)
     {Num_of_Changed=i;
      break;
     }
 }

for (i=0;i<100;i++)
 {if (Change[i]==0)
   {Num_of_Change=i;
    break;
   }
 }
for (W=0;W<100;W++)
{ for (i=0;i<100;i++)
    {if (Origin[i]==0)
   {Num_of_Origin=i;
    break;
    }
 }
 for (i=0;i<100;i++)
   {
        if ( Origin[i]==Changed[0])
      { for (k=0;k<Num_of_Changed;k++)
         {if (Origin[i+k]!=Changed[k])
             {Judge=1;break;
             }
          }
     if (Judge==0&&i!=0)
             {if (Origin[i-1]!=' '&&Origin[i-1]!=',')
                {
                 Judge=1;}

             }   
     if (Judge==0&&i==0)
             {if (Origin[Num_of_Changed]!=' ')
             {Judge=1;}
             }
  
           if (Judge==0)
          {Start=i;} 
           Judge=0; 
      }
   }

Temp=Num_of_Origin-Start;
if (Num_of_Change>=Num_of_Changed)
  {   for (i=0;i<Num_of_Change;i++)
     { if (i<Num_of_Changed)
       {Origin[Start+i]=Change[i];
        Temp-=1;}
          else 
          {
            Num_of_Origin++;
              for (M=0;M<Temp;M++)
              {Origin[Num_of_Origin-1-M]=Origin[Num_of_Origin-2-M];
              }
           
           Origin[Start+i]=Change[i];
         
         }
     }
  }
 else 
  {  for (i=0;i<Num_of_Changed;i++)
     {if (i<Num_of_Change)
        {Origin[Start+i]=Change[i];
          Temp-=1;
           M=i+1;   }
           else
             {
                      Num_of_Origin--;       
                  for(k=0;k<Temp;k++)
                      {Origin[Start+M+k]=Origin[Start+M+k+1];
                       Origin[Num_of_Origin+1]=0;
                       }
                    
             }
         
      }
   } 
Start=101;
}


      for (i=0;i<100;i++)       
   {   if (Origin[i]!=0)
      cout<<Origin[i];
}      
 cout<<endl;     
return 0;
}
