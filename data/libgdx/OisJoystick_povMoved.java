private void povMoved(int povIndex, int value) {
    povs[povIndex] = value;
    if (listener != null)
        listener.povMoved(this, povIndex, getPov(povIndex));
}
