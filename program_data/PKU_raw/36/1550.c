
int main()
{
        int cishu[2][54]={0},l1,l2,i;
        char input1[100],input2[100];
        scanf("%s%s",input1,input2);
        l1=strlen(input1);
        l2=strlen(input2);
        if (l1!=l2)
        {
                printf("NO\n");
                return 0;
        }
        for(i=0;i<l1;i++)
        {
                if(input1[i]>='a'&&input1[i]<='z')
                {
                        cishu[0][input1[i]-'a']++;
                }
                else if(input1[i]>='A'&&input1[i]<='Z')
                {
                        cishu[0][input1[i]-'A'+26]++;
                }
        }
        for(i=0;i<l2;i++)
        {
                if(input2[i]>='a'&&input2[i]<='z')
                {
                        cishu[1][input2[i]-'a']++;
                }
                else if(input2[i]>='A'&&input2[i]<='Z')
                {
                        cishu[1][input2[i]-'A'+26]++;
                }
        }
        for(i=0;i<54;i++)
        {
                if(cishu[0][i]!=cishu[1][i])
                {
                        printf("NO\n");
                        return 0;
                }
        }
        printf("YES\n");
        return 0;
}