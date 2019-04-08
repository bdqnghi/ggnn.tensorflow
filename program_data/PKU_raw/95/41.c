// ??????????


int main() 
{
    int i = 0;
    char s1[255], s2[255], c1, c2;

    gets(s1);
    gets(s2);

    for (i = 0; s1[i] && s2[i]; i++) 
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 'a' - 'A';
        }
        if (s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] -= 'a' - 'A';    
        }
        if (s1[i] != s2[i]) 
        {
            printf((s1[i] > s2[i]) ? ">" : "<");
            return 0;
        }
    }

    printf("=");
    return 0;
}