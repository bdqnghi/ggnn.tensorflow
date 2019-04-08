

int main()
{
    char data[101];
    char output[101];
    gets(data);
    int len = strlen(data);
    int i;
    
    for(i = 0; i <= len - 2; i++)
          *(output + i) = *(data + i) + *(data + i + 1);
    
    *(output + len - 1) = *(data + len - 1) + *data;
    *(output + len) = '\0';
    puts(output);
      
    return 0;
}

