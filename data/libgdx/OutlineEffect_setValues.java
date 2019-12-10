public void setValues(List values) {
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if (value.getName().equals("Color")) {
            color = (Color) value.getObject();
        } else if (value.getName().equals("Width")) {
            width = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("Join")) {
            join = Integer.parseInt((String) value.getObject());
        }
    }
}
