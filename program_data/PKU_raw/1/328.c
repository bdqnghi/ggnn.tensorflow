int Divide(int a,int b);
int main()
{   
    int Times=0;
	int Num=0;
    int i=0;
    int Temp[100]={0};
    cin>>Times;
for (i=0;i<Times;i++)
    { cin>>Num;
	   Temp[i]=Divide(Num,Num);
    }
for (i=0;i<Times;i++)
   {cout<<Temp[i]<<endl;}
return 0;
}


int Divide(int a,int b)
{
	int Sum=0;
	int i=0;
    int Flag=0;
   if (a!=1)
	{ for (i=b;i>1;i--)
     {if (a%i==0)
         Sum+=Divide(a/i,i);
       Flag=1;
     }
    }
   if (Flag==0||a==1)
    {Sum=1;}
return Sum;
}

