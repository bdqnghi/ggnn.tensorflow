//
//  main.cpp
//  ????
//
//  Created by ? ? on 12-11-22.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main(int argc, const char * argv[])
{int i;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!=0;i++)
    {
        if(str1[i]<'a'&&str1[i]>='A'&&str1[i]<='Z')
    {
        str1[i]+=32;
    }
    }
    for(i=0;str2[i]!=0;i++)
    {if(str2[i]<'a'&&str2[i]>='A'&&str2[i]<='Z')
    {
        str2[i]+=32;
    }
    }
    switch (strcmp(str1, str2)) {
        case -1:
            cout<<"<";
            break;
        case 0:
            cout<<"=";
            break;
        case 1:
            cout<<">";
            break;
            
      
    }
    return 0;
}
