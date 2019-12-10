@Override
public Editable insert(int where, CharSequence text, int start, int end) {
    Log.d("Editable", "insert: " + text);
    return this;
}
