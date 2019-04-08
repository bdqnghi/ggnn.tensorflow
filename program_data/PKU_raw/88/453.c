//
//  Created by Chu-Pan,Wong on Dec 10, 2013.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//



int main(int argc, char** argv){
    char s[31];
    gets(s);
    int len = (int)strlen(s);
    char* p=s;
    char* q;
    for (int i = 0; i<len; i++){
        if (*(p+i) >= '0' && *(p+i) <= '9') {
            q = p+i;
            i++;
            while (*(p+i) >= '0' && *(p+i) <= '9') {
                i++;
            }
            *(p+i) = 0;
            printf("%s\n", q);
        }
    }
    return 0;
}