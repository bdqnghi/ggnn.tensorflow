private boolean updateParticle(Particle particle, float delta, int deltaMillis) {
    int life = particle.currentLife - deltaMillis;
    if (life <= 0)
        return false;
    particle.currentLife = life;
    float percent = 1 - particle.currentLife / (float) particle.life;
    int updateFlags = this.updateFlags;
    if ((updateFlags & UPDATE_SCALE) != 0)
        particle.setScale(particle.scale + particle.scaleDiff * scaleValue.getScale(percent));
    if ((updateFlags & UPDATE_VELOCITY) != 0) {
        float velocity = (particle.velocity + particle.velocityDiff * velocityValue.getScale(percent)) * delta;
        float velocityX, velocityY;
        if ((updateFlags & UPDATE_ANGLE) != 0) {
            float angle = particle.angle + particle.angleDiff * angleValue.getScale(percent);
            velocityX = velocity * MathUtils.cosDeg(angle);
            velocityY = velocity * MathUtils.sinDeg(angle);
            if ((updateFlags & UPDATE_ROTATION) != 0) {
                float rotation = particle.rotation + particle.rotationDiff * rotationValue.getScale(percent);
                if (aligned)
                    rotation += angle;
                particle.setRotation(rotation);
            }
        } else {
            velocityX = velocity * particle.angleCos;
            velocityY = velocity * particle.angleSin;
            if (aligned || (updateFlags & UPDATE_ROTATION) != 0) {
                float rotation = particle.rotation + particle.rotationDiff * rotationValue.getScale(percent);
                if (aligned)
                    rotation += particle.angle;
                particle.setRotation(rotation);
            }
        }
        if ((updateFlags & UPDATE_WIND) != 0)
            velocityX += (particle.wind + particle.windDiff * windValue.getScale(percent)) * delta;
        if ((updateFlags & UPDATE_GRAVITY) != 0)
            velocityY += (particle.gravity + particle.gravityDiff * gravityValue.getScale(percent)) * delta;
        particle.translate(velocityX, velocityY);
    } else {
        if ((updateFlags & UPDATE_ROTATION) != 0)
            particle.setRotation(particle.rotation + particle.rotationDiff * rotationValue.getScale(percent));
    }
    float[] color;
    if ((updateFlags & UPDATE_TINT) != 0)
        color = tintValue.getColor(percent);
    else
        color = particle.tint;
    if (premultipliedAlpha) {
        float alphaMultiplier = additive ? 0 : 1;
        float a = particle.transparency + particle.transparencyDiff * transparencyValue.getScale(percent);
        particle.setColor(color[0] * a, color[1] * a, color[2] * a, a * alphaMultiplier);
    } else {
        particle.setColor(color[0], color[1], color[2], particle.transparency + particle.transparencyDiff * transparencyValue.getScale(percent));
    }
    return true;
}
