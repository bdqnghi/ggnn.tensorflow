@Override
public Editable append(CharSequence text, int start, int end) {
    Log.d("Editable", "append: " + text);
    return this;
}
