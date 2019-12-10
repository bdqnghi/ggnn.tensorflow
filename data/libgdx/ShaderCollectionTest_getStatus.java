@Override
protected void getStatus(StringBuilder stringBuilder) {
    super.getStatus(stringBuilder);
    if (shaderProvider.error)
        stringBuilder.append(" ERROR CREATING SHADER, REVERTED TO DEFAULT");
    else {
        for (final ModelInstance instance : instances) {
            if (instance.animations.size > 0) {
                stringBuilder.append(" press space or menu to switch animation");
                break;
            }
        }
    }
}
