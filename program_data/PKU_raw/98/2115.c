int WordLen(char *a)
{
    int i;
    for (i=0;a[i];i++);
    return i;
}
main()
{
    int i,num,space=80;
    char word[41];
    cin>>num;
    for (i=0;i<num;i++)
    {
        cin>>word;
        if (space==80)
        {
            cout<<word;
            space-=WordLen(word);
        }
        else if (space>=WordLen(word)+1)
        {
            cout<<' '<<word;
            space-=WordLen(word)+1;
        }
        else 
        {
            cout<<endl<<word;
            space=80-WordLen(word);
        }
    }
    
}
        
