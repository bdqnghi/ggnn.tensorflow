public void setPosition(float x, float y) {
    if (attached) {
        float xAmount = x - this.x;
        float yAmount = y - this.y;
        boolean[] active = this.active;
        for (int i = 0, n = active.length; i < n; i++) if (active[i])
            particles[i].translate(xAmount, yAmount);
    }
    this.x = x;
    this.y = y;
}
