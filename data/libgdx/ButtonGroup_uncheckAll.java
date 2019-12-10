/**
 * Sets all buttons' {@link Button#isChecked()} to false, regardless of {@link #setMinCheckCount(int)}.
 */
public void uncheckAll() {
    int old = minCheckCount;
    minCheckCount = 0;
    for (int i = 0, n = buttons.size; i < n; i++) {
        T button = buttons.get(i);
        button.setChecked(false);
    }
    minCheckCount = old;
}
