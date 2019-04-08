

    int ilong1,ilong2,iwide1,iwide2,buffer;
    int mat1[100][100],mat2[100][100],mat3[100][100];

int main()
{

    cin >> ilong1 >> iwide1;

    for(int i = 0; i < ilong1; i++){
        for(int j = 0; j < iwide1; j++){
            cin >> mat1[j][i];
        }
    }

    cin >> ilong2 >> iwide2;

    for(int i = 0; i < ilong2; i++){
        for(int j = 0; j < iwide2; j++){
            cin >> mat2[j][i];
            //cout << mat2[j][i];
        }
    }

    for(int i = 0; i < ilong1; i++){
        for(int j = 0; j < iwide2; j++){
            buffer = 0;
            for(int k = 0; k < iwide1; k++){
                buffer = buffer + mat1[k][i]*mat2[j][k];
            }
            mat3[i][j] = buffer;
        }
    }

    for(int i = 0; i < ilong1 - 1; i++){
        for(int j = 0; j < iwide2 - 1; j++){
            cout << mat3[i][j] << ' ';
        }
        cout << mat3[i][iwide2 - 1] << endl;
    }
    for(int j = 0; j < iwide2 - 1; j++){
        cout << mat3[ilong1 - 1][j] << ' ';
        }
        cout << mat3[ilong1 - 1][iwide2 - 1];
    return 0;
}

