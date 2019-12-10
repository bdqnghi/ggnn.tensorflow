@Override
public Editable replace(int st, int en, CharSequence source, int start, int end) {
    Log.d("Editable", "replace: " + source);
    return this;
}
