
int main()
{
    char w[100]; 
    int sentencelength,i,c=0;
	gets(w);
    sentencelength=strlen(w);

    for (i=1;i<sentencelength;i++) 
	{
        if (w[c]== ' '&&w[i]==' ')
            continue;
        else 
		{
            c++;
            w[c]=w[i];
		}
	}
	w[++c]='\0';
    puts(w);
    return 0;
}
