int main()
{
    char s0[257],s1[257],s2[257];
    int i,j,k0,k1,k2,l;
    scanf("%s",s0);
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s0[i]!='\0';i++)
    {
        j=0;
        if(s1[0]==s0[i])
        for(j=1;s1[j]!='\0';j++)
        if(s1[j]!=s0[i+j])break;
        if(s1[j]=='\0')
        {
            k0=k1=k2=0;
            while(s0[k0]!='\0')k0++;
            while(s1[k1]!='\0')k1++;
            while(s2[k2]!='\0')k2++;
            for(l=i+k1;l<k0;l++)
            s0[l+k2-k1]=s0[l];
            for(l=0;l<k2;l++)
            s0[i+l]=s2[l];
            break;
        }
    }
    l=0;
    while(s0[l]!='\0')
    {
        printf("%c",s0[l]);
        l++;
    }

}
