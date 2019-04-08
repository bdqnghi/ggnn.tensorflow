

int imat[100][100];

int main()
{
    int n;
    cin >> n;
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        for(int j = 0; j < a; j++){
            for(int k = 0; k < b; k++){
                cin >> imat[j][k];
            }
        }

        int (*p)[100] = &(imat[0]);

        int counter = 0;

        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if( j%b==0 || j%b==(b-1) || i==0 || i==(a-1))
                    counter = counter + *(*(p+i)+j);
            }
        }
        //counter = counter - *(*(p)) - *(*(p+a-1)) - *(*(p+a-1)+b-1) - *(*(p)+b-1);
        cout << counter << endl;
    }
    return 0;
}
