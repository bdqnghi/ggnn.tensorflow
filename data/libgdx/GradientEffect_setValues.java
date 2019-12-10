public void setValues(List values) {
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if (value.getName().equals("Top color")) {
            topColor = (Color) value.getObject();
        } else if (value.getName().equals("Bottom color")) {
            bottomColor = (Color) value.getObject();
        } else if (value.getName().equals("Offset")) {
            offset = ((Integer) value.getObject()).intValue();
        } else if (value.getName().equals("Scale")) {
            scale = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("Cyclic")) {
            cyclic = ((Boolean) value.getObject()).booleanValue();
        }
    }
}
