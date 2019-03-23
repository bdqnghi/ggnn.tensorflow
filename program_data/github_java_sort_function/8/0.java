    public void sort(int left, int right) {
        if(right - left <= 0)
            return;  
        
        else {
            
            
            int pivot = this.array[right];

            System.out.println("Value in right "+this.array[right]+" is made the pivot");
            System.out.println("left="+left+" right="+right+" pivot="+pivot+"\n\n");

            int pivotLocation = this.partition(left, right, pivot);
            System.out.println("Value in left "+this.array[left]+" is made the pivot\n\n");

            this.sort(left, pivotLocation - 1); 
            this.sort(pivotLocation + 1, right); 
        }
    }


    public int partition(int leftpointer, int right, int pivot) {
        int left = leftpointer - 1;

        while(true){
            while(this.array[++left] < pivot);
            System.out.println("Bigger value found against pivot "+pivot+" is "+this.array[left]);
            
            while(right > 0 && this.array[--right] > pivot);
            System.out.println("Smaller value found against pivot "+pivot+" is "+this.array[right]);

            if(left >= right) break;

            else {
                this.swap(left, right);
                System.out.println(this.array[left]+" was swapped for "+this.array[right]);
            }

        }

        this.swap(leftpointer, right);
        return leftpointer;
    }


    public void swap(int pos1, int pos2) {
        int temp = this.array[pos1];
        this.array[pos1] = this.array[pos2];
        this.array[pos2] = temp;
    }

