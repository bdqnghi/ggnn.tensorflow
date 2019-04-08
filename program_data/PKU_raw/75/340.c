// ?????? ???1000010500
// ?????
// 2010-11-24
 

int total(char[]);                       //?????
int hign(int[],int[],int);           // ???? 
char t[2][100000];                 
int main()
{
    int i,j,n,num[2][100000];
    
    cin.getline(t[0],100000);
    cin.getline(t[1],100000);
    memset(num,0,sizeof(num));
    
    i = 0;
    for (j = 0;t[0][j] != '\0';j ++)     // ??????? 
    {
        if (t[0][j] == ',')
        {
                 i += 1;                 
                 continue;
        }  
        num[0][i] = num[0][i] * 10 + t[0][j] - '0';
    }
    n = i;
    i = 0;
    for (j = 0;t[1][j] != '\0';j ++)       // ???????
    {
        if (t[1][j] == ',')                
        {
                 i += 1;
                 continue;
        }
            
        num[1][i] = num[1][i] * 10 + t[1][j] - '0';
    }

    cout << total(t[0]) << ' ' << hign(num[0],num[1],n);
    return 0;
}

int total(char t[])
{
    int count = 1,i;                         // ????‘?’?1 
    for (i = 0;t[i] != '\0';i ++)
        if (t[i] == ',')
            count ++;
    return count;
}

int hign(int a[],int b[],int n)     // ??????? ??? 
{
    int i,j,count,max = 0;
    for (i = 0;i < 1000;i++)
    {
        count = 0;
        for (j = 0;j <= n;j ++)
        {
            if (a[j] <= i && b[j] > i)    // ?i???? 
                count ++;
            if (count > max)
                max = count;
        }
    }
    return max;
}
       


    



           
    
