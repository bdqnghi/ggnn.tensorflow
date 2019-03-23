 public int[] recursiveBubble(final int[] args,
                                 final int startIndex,
                                 final int endIndex) {

        if(startIndex > endIndex){
            return args;
        }

        if (startIndex == endIndex - 1) {

            recursiveBubble(args, 0, endIndex - 1);

        } else if (args[startIndex] > args[startIndex+1]) {

            int currentNumber = args[startIndex];
            args[startIndex] = args[startIndex + 1];
            args[startIndex + 1] = currentNumber;

            recursiveBubble(args, startIndex + 1, endIndex);

        } else  {

            recursiveBubble(args, startIndex + 1, endIndex);

        }

        return args;

    }