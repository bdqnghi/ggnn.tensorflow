public void flipY() {
    angleValue.setHigh(-angleValue.getHighMin(), -angleValue.getHighMax());
    angleValue.setLow(-angleValue.getLowMin(), -angleValue.getLowMax());
    gravityValue.setHigh(-gravityValue.getHighMin(), -gravityValue.getHighMax());
    gravityValue.setLow(-gravityValue.getLowMin(), -gravityValue.getLowMax());
    windValue.setHigh(-windValue.getHighMin(), -windValue.getHighMax());
    windValue.setLow(-windValue.getLowMin(), -windValue.getLowMax());
    rotationValue.setHigh(-rotationValue.getHighMin(), -rotationValue.getHighMax());
    rotationValue.setLow(-rotationValue.getLowMin(), -rotationValue.getLowMax());
    yOffsetValue.setLow(-yOffsetValue.getLowMin(), -yOffsetValue.getLowMax());
}
