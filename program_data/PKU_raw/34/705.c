void Try(int); 
int main()
{
    int n;
    cin >> n;
    Try (n);
    cout << "End" << endl; 
    return 0;
}
void Try(int i)
{
     while (i != 1)
     {
             if (i % 2 == 0)
             {
                   cout << i << "/2=" << i / 2 << endl;
                   i = i / 2;
             }
             else
             {
                 cout << i  << "*3+1=" << i * 3 + 1<< endl;
                 i = i * 3 + 1;
             }
     }
}  
   