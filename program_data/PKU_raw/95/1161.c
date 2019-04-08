
int main()
{
    int i=0,sum=0;
    char str1[80],str2[80];
    int len1=0,len2=0;
    cin.getline(str1,80);
    
    cin.getline(str2,80);
    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);

    
    for(i=0;i<len1;i++)
    {
                       if(str1[i]>=97)
                       str1[i]=str1[i]-32;
                       if(str2[i]>=97)
                       str2[i]=str2[i]-32;
                       
                        if(str1[i]>str2[i])
                       {cout <<   ">" << endl;
                       sum=1;
                       break;
                       }
                       else if(str1[i]<str2[i])
                       {
                           cout << "<" << endl;
                           sum=1;
                           break;
                       } 
                       else if(str1[i]==str2[i])
                       continue;
    } 
    
    if(len1<len2)
    {cout << "<" << endl;
    sum=1;
    }
    if(sum!=1)
    cout << "=" << endl;
    
    
return 0;    
}
