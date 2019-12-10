private String valueLabel(float value) {
    value = (int) (value * 1000) / 10f;
    if (value % 1 == 0)
        return String.valueOf((int) value) + '%';
    else
        return String.valueOf(value) + '%';
}
