static void quick(int arr[],int low,int up)
    {
    int piv,temp,left,right;
     boolean pivot_placed=false;
    
    System.out.println("low : "+low+" up :  "+up);
    left=low;
    right=up;
    piv=low; 
    if (low>=up)
    return;
    System.out.println("sub list : ");
    display(arr,low,up);
    
    while(pivot_placed==false)
    {
    
    while( arr[piv]<=arr[right] && piv!=right )
    right=right-1;
    if ( piv==right )
          pivot_placed=true;
    if ( arr[piv] > arr[right] )
    {
    temp=arr[piv];
    arr[piv]=arr[right];
    arr[right]=temp;
    piv=right;
    }
    
    while( arr[piv]>=arr[left] && left!=piv )
    left=left+1;
    if (piv==left)
    pivot_placed=true;
    if ( arr[piv] < arr[left] )
    {
    temp=arr[piv];
    arr[piv]=arr[left];
    arr[left]=temp;
    piv=left;
    }
    }
    System.out.println();
    System.out.println("pivot placed is  "+arr[piv]);
    display(arr,low,up);
    System.out.println();
    quick(arr,low,piv-1);
    quick(arr,piv+1,up);
    }