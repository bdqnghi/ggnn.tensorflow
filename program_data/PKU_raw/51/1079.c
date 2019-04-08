             int freq[27][27][27][27];
int main ()
{
    int n,max,i,j,k,l;
    char str[505];
    cin>>n>>str;int len=strlen(str);
    if (n==2)
    {
             int fre[27][27];
             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                     fre[i][j]=0;
             for (i=0;i<=len-2;i++)
             {
                 fre[str[i]-96][str[i+1]-96]++;
             }
             max=0;
             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                 {
                     if (fre[i][j]>=max)max=fre[i][j];
                 }
             if (max==1){cout<<"NO";max=-1;}
             else cout<<max<<endl;
             for (i=0;i<=len-2;i++)
             {
                 if (fre[str[i]-96][str[i+1]-96]==max){cout<<str[i]<<str[i+1]<<endl;fre[str[i]-96][str[i+1]-96]=0;}
             }
    }
    else if (n==3)
    {
             int fre[27][27][27];
             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                     for (k=1;k<=26;k++)
                         fre[i][j][k]=0;
             for (i=0;i<=len-3;i++)
             {
                 fre[str[i]-96][str[i+1]-96][str[i+2]-96]++;
                 //cout<<str[i]-96<<str[i+1]-96<<str[i+2]-96<<endl;
             }
             max=0;
             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                     for (k=1;k<=26;k++)
                         if (fre[i][j][k]>=max)max=fre[i][j][k];
             if (max==1){cout<<"NO";max=-1;}
             else cout<<max<<endl;
             for (i=0;i<=len-2;i++)
             {
                 if (fre[str[i]-96][str[i+1]-96][str[i+2]-96]==max){cout<<str[i]<<str[i+1]<<str[i+2]<<endl;fre[str[i]-96][str[i+1]-96][str[i+2]-96]=0;}
             }
    }
    else 
    {

             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                     for (k=1;k<=26;k++)
                         for (l=1;l<=26;l++)
                         freq[i][j][k][l]=0;
             for (i=0;i<=len-4;i++)
             {
                 freq[str[i]-96][str[i+1]-96][str[i+2]-96][str[i+3]-96]++;
                 //cout<<str[i]-96<<str[i+1]-96<<str[i+2]-96<<endl;
             }
             max=0;
             for (i=1;i<=26;i++)
                 for (j=1;j<=26;j++)
                     for (k=1;k<=26;k++)
                         for (l=1;l<=26;l++)
                         if (freq[i][j][k][l]>=max)max=freq[i][j][k][l];
             if (max==1){cout<<"NO";max=-1;}
             else cout<<max<<endl;
             for (i=0;i<=len-2;i++)
             {
                 if (freq[str[i]-96][str[i+1]-96][str[i+2]-96][str[i+3]-96]==max){cout<<str[i]<<str[i+1]<<str[i+2]<<str[i+3]<<endl;freq[str[i]-96][str[i+1]-96][str[i+2]-96][str[i+3]-96]=0;}
             }
    }
    //while (1);
}
