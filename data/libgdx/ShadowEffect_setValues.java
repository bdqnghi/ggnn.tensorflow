public void setValues(List values) {
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if (value.getName().equals("Color")) {
            color = (Color) value.getObject();
        } else if (value.getName().equals("Opacity")) {
            opacity = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("X distance")) {
            xDistance = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("Y distance")) {
            yDistance = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("Blur kernel size")) {
            blurKernelSize = Integer.parseInt((String) value.getObject());
        } else if (value.getName().equals("Blur passes")) {
            blurPasses = ((Integer) value.getObject()).intValue();
        }
    }
}
