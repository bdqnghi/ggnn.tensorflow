int main()
{
    int n,i;
    float h;
    char str[10];
    int k=0,j=0;
    float male[40],famale[40];
    male[0]=0;
    famale[0]=0;
    cin >> n;
    int len;
    for (i=1;i<=n;i++)
    {
        cin >> str >> h;
        len=strlen(str);
        if (len==4)
        {
                      k++;
                      male[k]=h;
        }
        else
        {
                      j++;
                      famale[j]=h;
        }
    }
        int p,q;
        float temp;
        for (p=1;p<=k-1;p++)
        {
            for (q=1;q<=k-p;q++)
            {
                if (male[q]>male[q+1])
                {
                                      temp=male[q+1];
                                      male[q+1]=male[q];
                                      male[q]=temp;
                }
            }
        }
        for (p=1;p<=j-1;p++)
        {
            for (q=1;q<=j-p;q++)
            {
                if (famale[q]>famale[q+1])
                {
                                      temp=famale[q+1];
                                      famale[q+1]=famale[q];
                                      famale[q]=temp;
                }
            }
        }
        printf("%.2f",male[1]);
        for (p=2;p<=k;p++)
        {
            cout << " " ;
            printf("%.2f",male[p]);
 
        }
        for (q=j;q>=1;q--)
        {
            cout << " " ;
            printf("%.2f",famale[q]);
        }
    
      
        return 0;
    }