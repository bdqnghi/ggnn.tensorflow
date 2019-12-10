public CharBuffer slice() {
    return new CharSequenceAdapter(sequence.subSequence(position, limit));
}
