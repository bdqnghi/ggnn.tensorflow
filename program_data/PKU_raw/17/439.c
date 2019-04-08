int main()
{
    char str[101],label[101];
    while (cin >> str)
    {
    
    int pos[101];
    int len=strlen(str);
    int left=0,right=0;
    int pos_i=-1;
    int i;
    
    for (i=0;i<=len-1;i++)
    {
        label[i]=' ';
        if (str[i]=='(')
        {
            left++;
            pos[++pos_i]=i;
        }
        if (str[i]==')')
        {
            if (left<=right)
            {
                label[i]='?';
            }
            else
            {
                right++;
                pos_i--;
            }
        }
    }
   if (pos_i>=0)
   {
       for (i=0;i<=pos_i;i++)
       {
           label[pos[i]]='$';
       }
   }
   label[len]='\0';
   cout << str << endl;
   cout << label << endl;
} 

   return 0;
}