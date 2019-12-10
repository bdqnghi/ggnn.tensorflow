public Transform idt() {
    translation.set(0, 0, 0);
    rotation.idt();
    scale.set(1, 1, 1);
    return this;
}
