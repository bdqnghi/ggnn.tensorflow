
int compare (const void * a, const void * b)
{
        return( *(int*)a - *(int*)b );
}

int main(){
        int n,k;
        cin>>n>>k;
        int a[1000];
        for(int i=0; i<n ; i++)
                cin>>a[i];
        qsort(a,n,sizeof(int),compare);
        for(int i=0 ; i<n ; i++)
                for( int j=n-1 ; j>i ; j--)
                {
                        if(a[i]+a[j]==k)
                        {
                                cout<<"yes"<<endl;
                                return 1;
                        }
                        else if(a[i]+a[j]<k)
                                break;
                }
        cout<<"no"<<endl;
        return 0;
}