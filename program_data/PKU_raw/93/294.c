int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3;
    c=a/5;
    d=a/7;
    if((a==3*b)&(a==5*c)&(a==7*d)) printf("3 5 7");
    else
    {if((a==3*b)&(a==5*c)) printf("3 5");
     else
     {if((a==3*b)&(a==7*d)) printf("3 7");
      else
      {if((a==5*c)&(a==7*d)) printf("5 7");
       else
       {if((a==3*b)) printf("3");
        else
        {if((a==5*c)) printf("5");
         else
         {if((a==7*d)) printf("7");
          else printf("n");
         }
        }
       }
      }
     }
    }
return 0;
}   