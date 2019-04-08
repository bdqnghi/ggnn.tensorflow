int main()
{
    int number;
    cin >> number;
    char article[40]; 
    int i = 0,k = 0;
    cin >> article;
    i = strlen(article);
    cout << article;
    while(k < number-1)
    {
         cin >> article;
         char *p = article;
         i = i + strlen(article) + 1; 
         if(i <= 80)
         {
              //cout << " " << article;
              cout << " ";
              for(;*p != '\0'; p++) cout << *p;
         }
         else
         {
              cout << endl << article;
              i = strlen(article);
         }
         ++k;
    }
    return 0;
}
