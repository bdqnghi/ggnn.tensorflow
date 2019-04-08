char str[1000];
int main(int argc, char *argv[])
{
    char current;
    int q=0;
    cin.getline(str,1000,'\n');
    current=str[0]>=96?str[0]-'a'+'A':str[0];
    
    for(int i=0;i<strlen(str)+1;i++)
    {
        if(str[i]>=96)str[i]-='a'-'A';
        if(str[i]==current){
            q++;
        }
        else{
            cout<<"("<<current<<","<<q<<")";
            current=str[i];
            q=1;
        }
    }
    return EXIT_SUCCESS;
}
