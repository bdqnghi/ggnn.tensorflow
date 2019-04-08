
int main()
{
    int i,j,k,n,b[100];
    char a[100],l;
    cin.getline(a,100);
    n = strlen(a);
    l = a[0];
    for(i=0;i<n;i++)
        b[i] = i;
        for(i=0;;i++){
        for(j=0;j<n-1;j++)
        {
            if(a[j]==l&&a[j+1]!=l){
                cout << b[j] << " " << b[j+1] <<endl;
               for(k=j+2;k<n;k++)
               {
                   b[j] = b[k];
                   a[j] = a[k];
                   j++;
               }
               n = n-2;
               break;
        }
        }
        if(n==0)
            break;

    }
}

