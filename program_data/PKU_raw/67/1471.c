int main()
{
    int n;
    float a[100];
    float b[100];
    float effect[100];
    int i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
          cin >> a[i];
          cin >> b[i];
          effect[i] = b[i] / a[i];
    }
    for(i = 1; i < n; i++)
    {
          if(effect[i] - effect[0] > 0.05)
          {
              cout << "better" << endl;
          }
          else if(effect[0] - effect[i] > 0.05)
               { 
                   cout << "worse" << endl;
               }
               else
               {
                   cout << "same" << endl;
               }
    }
    return 0;
}
