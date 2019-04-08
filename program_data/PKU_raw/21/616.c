int main()
{
    double Numbers[500]={0};
    double Temp[100]={-1};
    double Ave=0;
    double Sum=0;
    double Max=0;
    double Exchange=0;
    int k=0;
	int n=0;
	int i=0;
    int j=0;
	cin>>n;
	for (i=0;i<n;i++)
    {cin>>Numbers[i];
     Sum+=Numbers[i];}
    Ave=Sum/n;
    for (i=0;i<n;i++)
    { if (fabs(Numbers[i]-Ave)>Max)
       {Max=fabs(Numbers[i]-Ave);}
    }
   for (i=0;i<n;i++)
   {if (fabs(fabs(Numbers[i]-Ave)-Max)<1e-5)
     {Temp[k]=Numbers[i];
      k++;
     }
   }
  if (k==1)
    {cout<<Temp[0]<<endl;}
  else
    { for (i=0;i<k-1;i++)
       {  for (j=0;j<k-1;j++)
           { if (Temp[j]>Temp[j+1])
                  {  Exchange=Temp[j];
                     Temp[j]=Temp[j+1];
                     Temp[j+1]=Exchange;
                  }
           }
       }
     cout<<Temp[0];
     for (i=1;i<k;i++)
     {cout<<","<<Temp[i];}
     cout<<endl;
    }
  



return 0;
}
