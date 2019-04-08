/*
 * Filename:homework_deleteitems.cpp
 * Author:guan hon wei
 *  Created on: 2011-10-23
 * Function: Just for homework.......
 */



int main ()
{
	int n,i,k,c; //define the variables
	cin>>n; //read the total number of the array
	long int a[n]; // define the array as a long int (as I can't figure out what a signed integer should be defined)
	for (i=0;i<n;i++) // start loop of reading the array
	{
		cin>>a[i];
	}
	cin>>k; //process of reading is over
	for (i=n,c=0;i>0;i--) // checking from the back
	{
		if (a[i-1]==k) // when we find the target item k
		{
			for(i=i-1;i<n;i++) //we delete it
			{
				a[i] = a[i+1]; //and move the array behinds it
			}
			a[i]=0; //the last items equals 0
			c++;
		}
	}
	n=n-c; //the number of effective items
	for (i=0;i<n-1;i++)
	{
		cout<<a[i]<<' ';//print the array
	}
	cout<<a[i]; // incase there is an extra blank
	return 0;

}

