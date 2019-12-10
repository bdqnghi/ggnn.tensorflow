public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    final EffectPanel other = (EffectPanel) obj;
    if (effect == null) {
        if (other.effect != null)
            return false;
    } else if (!effect.equals(other.effect))
        return false;
    return true;
}
