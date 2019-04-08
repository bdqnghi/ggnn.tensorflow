char str[31];
void number(int position)
{
    int i;
    if (!*(str+position)) return;
    else if(*(str+position)<='9'&&*(str+position)>='0'&&*(str+position-1)!='-')
    {
        for (i=position;*(str+i)<='9'&&*(str+i)>='0';i++)
            cout<<*(str+i);
        cout<<endl;
        number(i);
    }    
    else if (*(str+position)<='9'&&*(str+position)>='0'&&*(str+position-1)=='-')
    {
        for (i=position;*(str+i)<='9'&&*(str+i)>='0';i++);
        number(i);
    }
    else   number(position+1);
}
int main()
{
    int i;
    gets(str);
    number(0);
}
