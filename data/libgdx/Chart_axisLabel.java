private String axisLabel(float value) {
    value = (int) (value * 100);
    if (value % 1 == 0)
        return String.valueOf((int) value) + '%';
    else
        return String.valueOf(value) + '%';
}
