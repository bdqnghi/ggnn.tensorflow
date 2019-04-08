//********************************
//*???????   **
//*?????? 1200012827 **
//*???2012.11.18  **
//********************************
int main()              
{
    char str[500]={' '};              
    cin >> str;                       
    int len=strlen(str);
    int i,j,k;
    int m;
    float leap;
    for (i=2;i<=len;i++)               //?????????????????
    {
       if (i%2==0)  
	   {leap=0.5;}
       else 
	   {leap=0;}
       if (i==2)
       {
            for (j=0;j<=len-2;j++)        
            {
                if (str[j]==str[j+1])
                {
                    cout << str[j] << str[j+1] << endl;
                }
            }
        }
        else                        
        {
            for (j=0;j<=len-i;j++)        
            {
                m=1;
                for (k=j;k<j+(i-1)/2+leap;k++)           //??????????
                {
                    if (str[k]!=str[2*j+i-1-k])
                    {
                        m=0;
                        break;
                    }
                }
                if (m==1)                                //????????
                {
                    for (k=j;k<=j+i-1;k++)
                    {
                        cout << str[k];
                    }
                    cout << endl;
                }
            }
        }
    }
     return 0;
}
                        
