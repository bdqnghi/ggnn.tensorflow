char str[120];int n;
void dispose(int x)
{
    int i,j,k=0;
    for(i=x+1,k=0;i<n;i++)
    {
        if(str[i]=='('&&k==0)
        {    
            dispose(i);
            k++;
            
        }
        if(str[i]==')')
        {
            str[i]=' ';
            str[x]=' ';
            for(j=i+1;j<n;j++)
            {
                if(str[j]=='(')
                {
                    dispose(j);
                }
            }
            break;
        }
    }
}
main()
{
    int N,e;scanf("%d",&N);
    for(e=0;e<N;e++)
    {
        scanf("%s",str);printf("%s\n",str);
        int i,j,k;n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='(') break;
        }
        dispose(i);//printf("%d\n",i);printf("%s\n",str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='(') printf("$");
            else 
            {
                if(str[i]==')') 
                    printf("?");
                else 
                    printf(" ");
            }
        }
        printf("\n");
    }
    }