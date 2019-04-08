int main()
{
    int k;
    char sen1[80],sen2[80];
    cin.getline(sen1,80);
    cin.getline(sen2,80);
    int nlen1=strlen(sen1),nlen2=strlen(sen2);
    char B[3]={'<','=','>'};
    for(int i=0;i<nlen1;i++)
    if(sen1[i]>='A'&&sen1[i]<='Z')
    sen1[i]+='a'-'A';
    for(int i=0;i<nlen2;i++)
    if(sen2[i]>='A'&&sen2[i]<='Z')
    sen2[i]+='a'-'A';
    for(int i=0;i<nlen2;i++)
    k=strcmp(sen1,sen2);
    cout<<B[k+1];
    return 0;
}
