

int main()
{
    int n;
    cin >> n;

    int iin[100];
    int counter = 0;
    for(int i = 0; i < n; i++){
        cin >> iin[i];
        counter = counter + iin[i];
    }

    //cout << counter << endl;

    int buffer = 0;
    for(int i = 0; i < n; i++){
        if(abs((iin[i]*n-counter))>buffer)
            buffer = abs(iin[i]*n-counter);
    }

    //cout << buffer << endl;

    for(int i = 0; i < n-1; i++){
        for(int j = i; j < n; j++){
            if(buffer==abs(iin[i]*n-counter)&&buffer==abs(iin[i]*n-counter)&&(iin[i]>iin[j]))
                swap(iin[i],iin[j]);
        }
    }

    int buffer2 = 0;
    for(int i = 0; i < n; i++){
        if(buffer==abs(iin[i]*n-counter))
            buffer2++;
    }

    for(int i = 0; i < n; i++){
        if(buffer==abs(iin[i]*n-counter)&&buffer2!=1){
            buffer2--;
            cout << iin[i] << ',';
            continue;
        }
        if(buffer==abs(iin[i]*n-counter)&&buffer2==1){
            cout << iin[i];
        }
    }
    return 0;
}
