
/*Conversion from characters to numbers*/
void char2int (int *length, char *a, int* aa){
    int temp = 0, k = 0;
    for(int j=0; j<*length; ++j){
        if(a[j] == ','){
            temp = 0;
            ++k;
        }
        else
            aa[k] = 10 * aa[k] + a[j]-'0';
    }
}

int main(){
    char c, a[4*1000], b[4*1000];
    int aa[1000] ={0}, bb[1000] = {0}, stat[1000]={0};
    int i = 0, num = 0, length1 = 0, length2 = 0, maxindex=0, in, out;
    while(scanf("%c",&c)!=EOF && c!='\n'){
        a[i++] = c;
        ++length1;
        if(c == ',')
            ++num;
    }
    i = 0;
    while(scanf("%c",&c)!=EOF && c!='\n'){
        b[i++] = c;
        ++length2;
    }
    char2int(&length1, a, aa);
    char2int(&length2, b, bb);
    ++num;
    for(int i=0; i<num; ++i){
        in = aa[i];
        out = bb[i];
        for(int j=in; j<out; ++j)
            ++stat[j];
    }
    for(int i=0; i<1000; ++i)
        if(stat[i] > stat[maxindex])
            maxindex = i;
    cout << num << " " << stat[maxindex] << endl;
    return 0;
}
