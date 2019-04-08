

int main()
{
    int stack[100], top = 0, count = 0;
    char boy, c;
    cin >> boy;
    stack[top++] = count++;
    while ((c = cin.get()) != '\n')
    {
        if (c == boy)
        {
            stack[top++] = count++;
        }
        else
        {
            printf("%d %d\n", stack[--top], count++);
        }
    }
  
    return 0;
}