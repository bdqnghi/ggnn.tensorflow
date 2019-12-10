public final void push(int argNum) {
    index -= argNum;
    assert (index >= 0) : "Beginning of stack reached, push/pops are unmatched";
}
