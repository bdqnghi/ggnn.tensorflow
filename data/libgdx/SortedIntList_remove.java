@Override
public void remove() {
    // the contract specifies to remove the last returned element, if nothing was returned yet assumably do nothing
    if (previousPosition != null) {
        // if we are at the second element set it as the first element
        if (previousPosition == first) {
            first = position;
        } else // else remove last returned element by changing the chain
        {
            previousPosition.p.n = position;
            if (position != null) {
                position.p = previousPosition.p;
            }
        }
        size--;
    }
}
