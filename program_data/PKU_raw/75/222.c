int main()
{
    int x[1000]={0},y[1000]={0},counter=0,len,i,j,max=0,temp=0;;
    char s[10000];
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
                      if(s[i]==',')
                      counter++;
                      else
                      {
                          x[counter]=x[counter]*10;
                          x[counter]=x[counter]+s[i]-'0';
                      }
    }
    gets(s);
    len=strlen(s);
    counter=0;
    for(i=0;i<len;i++)
    {
                      if(s[i]==',')
                      counter++;
                      else
                      {
                          y[counter]=y[counter]*10;
                          y[counter]=y[counter]+s[i]-'0';
                      }
    }
    counter++;//?????
    for(i=0;i<1000;i++)
    {
                       temp=0;
                       for(j=0;j<counter;j++)
                       {
                                               if(x[j]<=i&&y[j]>i)
                                               temp++;
                       }
                       if(temp>max)
                       max=temp;
    }
    printf("%d %d",counter,max); 
    return 0;
}
    