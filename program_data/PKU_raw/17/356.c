


int main()
{
    char st[1000],st2[1000];
    while(cin.getline(st,1000)){
    for (int i=1;i<=strlen(st);i++) st2[i-1]=' '; st2[strlen(st)]='\0';

    int count=0,z[1000];
    for (int i=1;i<=strlen(st);i++)
        if (st[i-1]=='(') {count++; z[count]=i;}
        else if (st[i-1]==')')
        {
            if (count>0) {z[count]=0; count--;}
            else {st2[i-1]='?';}
        }
    for (int i=1;i<=count;i++) st2[z[i]-1]='$';
    cout<<st<<endl<<st2<<endl;
    }

    return 0;
}
