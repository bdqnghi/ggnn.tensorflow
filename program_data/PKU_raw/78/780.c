int main()
{
    int z,q,s,l;//???????? 
    int word[3];//???????? 
    char rank[6];//???? 
    for(int i=0;i<6;i++)
    {
           rank[i]='\0';//?rank??? 
    } 
    for(z=1;z<=5;z++)//????????????????????? 
    { 
        for(q=1;q<=5;q++)
        {
            if(q==z)
            continue; 
            for(s=1;s<=5;s++)
            {
                 if((s==q)||(s==z))
                 continue; 
                 for(l=1;l<=5;l++)
                 {
                     if((l==z)||(l==q)||(l==s))
                     continue;
                     else
                     {
                         word[0]=((z+q)==(s+l));
                         word[1]=((z+l)>(s+q));
                         word[2]=((z+s)<q);
                         if(word[0]+word[1]+word[2]==3)//???????? 
                         {
                             rank[6-z]='z';//???? 
                             rank[6-q]='q';
                             rank[6-s]='s';
                             rank[6-l]='l';
                         } 
                     } 
                 } 
            } 
        } 
    } 
    for(int i=1;i<=5;i++)//?? 
    {
            if(rank[i]=='\0')
            continue;
            else
            cout<<rank[i]<<' '<<10*(6-i)<<endl;
    }
    return 0;
}
