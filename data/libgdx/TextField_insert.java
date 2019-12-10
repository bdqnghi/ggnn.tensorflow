String insert(int position, CharSequence text, String to) {
    if (to.length() == 0)
        return text.toString();
    return to.substring(0, position) + text + to.substring(position, to.length());
}
