int counter=0;
void match()
{
    char temp;
    temp=cin.get();
    int num1=counter++;
    while(cin.peek()==temp)
        match();
    cin.get();
    cout<<num1<<' '<<counter++<<endl;
}


int main()
{
    match();
    return 0;
}
