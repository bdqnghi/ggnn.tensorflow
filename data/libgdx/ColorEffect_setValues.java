public void setValues(List values) {
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if (value.getName().equals("Color")) {
            setColor((Color) value.getObject());
        }
    }
}
