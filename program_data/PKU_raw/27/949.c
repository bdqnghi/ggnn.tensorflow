
int main()
{   
	int n, i;
	double a, b, c, x1, x2;
	double panDuan;

    cin >> n;
	for(i = 1; i <= n; i++)
	{
	    cin >> a >> b >> c;
		panDuan = b * b - 4 * a * c;
	    if (panDuan > 0)
		{
			x1 = (-b + sqrt(panDuan)) / (2 * a);
		    x2 = (-b - sqrt(panDuan)) / (2 * a);
            cout << fixed << setprecision(5);
			if((x1 >= 0.00001)||(x1 <= -0.00001))
				cout << "x1=" << x1 << ";";
			else
				cout << "x1=" << "0.00000" << ";";
            if((x2 >= 0.00001)||(x2 <= -0.00001))
				cout << "x2=" << x2 << endl;
			else
				cout << "x2=" << "0.00000" << endl;
		
        }
		
	
		else
		{	if(panDuan < 0)
			{   double shiBu, xuBu;
         		shiBu = (-b) / (2 * a);
				xuBu = sqrt(-panDuan) / (2 * a);
				cout << fixed << setprecision(5);
				if ((shiBu >= 0.00001)||(shiBu <= -0.00001))
				{   cout << "x1=" << shiBu << "+" << xuBu << "i;";
				    cout << "x2=" << shiBu << "-" << xuBu << "i" << endl;
				}
				else
				{
                    cout << "x1=" << "0.00000+" << xuBu << "i;";
				    cout << "x2=" << "0.00000-" << xuBu << "i" << endl;
				}
			}
            else
			{   double x = (-b) / (2 * a);
                if((x >= 0.00001)||(x <= -0.00001))
			        cout << fixed << setprecision(5) << "x1=x2=" << x << endl;
				else
					cout << "x1=x2=" << 0.00000 << endl;
			}
		}	
	}
	    return 0;
}