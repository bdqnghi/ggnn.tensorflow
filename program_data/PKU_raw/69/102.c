main(){
       int a[255];
       int b[255];
       int c[255];
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       memset(c,0,sizeof(c));
       char str[255];
       int len1,len2;
       cin >> str;
       len1 = strlen(str);
       for(int i = 0; i < len1; i++){
               a[len1 - 1 - i] = str[i] - '0';
       }
       cin >> str;
       len2 = strlen(str);
       for(int i = 0; i < len2; i++){
               b[len2 - 1 - i] = str[i] - '0';
       }
       if(len1 > len2){len2 = len1;}
       for(int i = 0; i < len2; i++){
               c[i] = a[i] + b[i];
       }
       for(int i = 0; i < len2; i++){
               if(c[i] >= 10){
                       c[i + 1] += c[i] / 10;
                       c[i] %= 10;
               }
       }
       for(int i = len2; i >= 0; i--){
               if(c[i] != 0){
                       len2 = i;
                       break;
               }
               if(i == 0){len2 = -1;}
       }
       if(len2 < 0){cout << "0" << endl;return 0;}
       for(int i = len2; i >= 0; i--){
               cout << c[i];
       }
       cout << endl;
}