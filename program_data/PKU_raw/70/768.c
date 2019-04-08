
int main ()
{

	int nInput=0, i, j;
	double x[100], y[100], xDiff=0.0;
	double yDiff=0.0, yMax=0.0;
	int yPosition1= 0.0 , yPosition2=0.0, xMax=0.0,xPosition1= 0.0 , xPosition2=0.0;
	
	
	cin>>nInput;
	

	
	for (i=0; i<nInput; i++)
	{
		cin>>x[i]>>y[i];
	}

	for (i=0; i<nInput; i++)
		for(j=0; j<nInput; j++)
			{xDiff= x[i]-x[j];
				if(xDiff>xMax)
				{
					xMax=xDiff;
					xPosition1 = i;
					xPosition2 = j;
			
				}
			}	

	
	
	for (i=0; i<nInput; i++)
		for(j=0; j<nInput; j++)
			{yDiff= y[i]-y[j];
				if(yDiff>yMax)
				{
					yMax=yDiff;
					yPosition1 = i;
					yPosition2 = j;
			
				}
			}	


	



		cout<<endl;


	if (yMax>=xMax)
		cout<< sqrt((y[yPosition1] - y[yPosition2])*(y[yPosition1] - y[yPosition2])+(x[yPosition1] - x[yPosition2])*(x[yPosition1] - x[yPosition2]) );

	else 
		cout<< sqrt((y[xPosition1] - y[xPosition2])*(y[xPosition1] - y[xPosition2]))+(x[xPosition1] - x[xPosition2])*(x[xPosition1] - x[xPosition2]);



	return 0;
		


}
