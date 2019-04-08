int main()
{
  int a;
  cin >> a;
  int b=3; 
  int c=5;
  int d=7;
  if(a%b==0&&a%c==0&&a%d==0)cout << 3 << " " << 5 << " "<< 7 << endl;
  
   else if(a%b==0&&a%c==0)cout << 3 << " " << 5 << endl;
  
    else if(a%b==0&&a%d==0)cout << 3 << " " << 7 << endl;
  
     else if(a%c==0&&a%d==0)cout << 5 << " "<< 7 << endl;
  
      else if(a%b==0)cout << 3 << endl;
  
       else if(a%c==0)cout << 5 << endl;
  
        else if(a%d==0) cout << 7 << endl;
          else cout << "n" <<endl;
     
  cin.get();cin.get();cin.get();
  return 0;
}
