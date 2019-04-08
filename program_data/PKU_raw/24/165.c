void main()
{
    char string[300],max[20]="",min[20]="aaaaaaaaaaaaaaa";
    int length,len,sho;
    do
    {
    	scanf("%s",string);
    	length=strlen(string);
    	len=strlen(max);sho=strlen(min);
    	if(length>len) strcpy(max,string);
    	if(length<sho) strcpy(min,string);
    }while (getchar()!='\n');
    puts(max);
    puts(min);
}