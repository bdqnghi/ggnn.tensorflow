void main()
{
        int i,j;
        char b[301];
        char c[27]="abcdefghijklmnopqrstuvwxyz";
        int d[26]={0};
        
        gets(b);

        for(i=0;i<strlen(b);i++)

                for(j=0;j<26;j++)
                        if(b[i]==c[j])d[j]++;

            j=0;
                        for(i=0;i<26;i++)
                                if(d[i]>0){printf("%c=%d\n",c[i],d[i]);
                                j++;}
                                if(j==0)printf("No");
     
        }
