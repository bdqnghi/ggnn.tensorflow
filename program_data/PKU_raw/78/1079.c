int main()
{
    int w[4];
    char n[4]={'z','q','s','l'};
    int k;
    char s;
    for (w[0]=10;w[0]<=50; w[0] = w[0]+10)
    {
        for(w[1]=10;w[1]<=50;w[1]=w[1]+10)
        {
            if(w[1]==w[0])
                continue;
            for(w[2]=10;w[2]<=50;w[2]=w[2]+10)
            {
                if(w[1]==w[2]||w[2]==w[1])
                    continue;
                for (w[3]=10;w[3]<=50;w[3]=w[3]+10)
                { 
                    if(w[1]==w[3]||w[3]==w[2]||w[3]==w[0])
                     continue;
                    if((w[0]+w[1])==(w[2]+w[3]))
                    {
                        if((w[0]+w[3])>(w[1]+w[2]))
                        {
                             if((w[0]+w[2])<w[1])
                             {
                                for(int i= 0;i < 4;i++)
                                {
                                    for(int j= i+1;j<4;j++)
                                    {
                                        if(w[i]<w[j])
                                        {
                                            k = w[i];
                                            w[i]= w[j];
                                            w[j]= k;
                                            s = n[i];
                                            n[i]= n[j];
                                            n[j]=s;
                                        }
                                    }
                                }
                                for(int i= 0;i <4;i++)
                                {
                                    cout << n[i] << " "<< w[i] << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
   return 0;
}
      