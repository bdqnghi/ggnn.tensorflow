int main()
{
    int n, a, b, c, i, sum=0, max=0, m[100]={0}, result[100];
    char p, q, name[20], s[20];
    scanf("%d\n", &n);
    for(i=0;i<n;i++)
    {
        result[i] = scanf("%s %d %d %c %c %d\n", s, &a, &b, &p, &q, &c);
        if(a>80 && c>0) m[i]+=8000;
        if(a>85 && b>80) m[i]+=4000;
        if(a>90) m[i]+=2000;
        if(a>85 && q=='Y') m[i]+=1000;
        if(b>80 && p=='Y') m[i]+=850;
        if(m[i]>max) 
        {
            max=m[i];
            strcpy(name,s);
        }
        sum+=m[i];            
    }
    printf("%s\n%d\n%d\n", name, max, sum);
    return 0;
}