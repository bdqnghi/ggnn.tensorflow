private void activateParticle(int index) {
    Particle particle = particles[index];
    if (particle == null) {
        particles[index] = particle = newParticle(sprite);
        particle.flip(flipX, flipY);
    }
    float percent = durationTimer / (float) duration;
    int updateFlags = this.updateFlags;
    particle.currentLife = particle.life = life + (int) (lifeDiff * lifeValue.getScale(percent));
    if (velocityValue.active) {
        particle.velocity = velocityValue.newLowValue();
        particle.velocityDiff = velocityValue.newHighValue();
        if (!velocityValue.isRelative())
            particle.velocityDiff -= particle.velocity;
    }
    particle.angle = angleValue.newLowValue();
    particle.angleDiff = angleValue.newHighValue();
    if (!angleValue.isRelative())
        particle.angleDiff -= particle.angle;
    float angle = 0;
    if ((updateFlags & UPDATE_ANGLE) == 0) {
        angle = particle.angle + particle.angleDiff * angleValue.getScale(0);
        particle.angle = angle;
        particle.angleCos = MathUtils.cosDeg(angle);
        particle.angleSin = MathUtils.sinDeg(angle);
    }
    float spriteWidth = sprite.getWidth();
    particle.scale = scaleValue.newLowValue() / spriteWidth;
    particle.scaleDiff = scaleValue.newHighValue() / spriteWidth;
    if (!scaleValue.isRelative())
        particle.scaleDiff -= particle.scale;
    particle.setScale(particle.scale + particle.scaleDiff * scaleValue.getScale(0));
    if (rotationValue.active) {
        particle.rotation = rotationValue.newLowValue();
        particle.rotationDiff = rotationValue.newHighValue();
        if (!rotationValue.isRelative())
            particle.rotationDiff -= particle.rotation;
        float rotation = particle.rotation + particle.rotationDiff * rotationValue.getScale(0);
        if (aligned)
            rotation += angle;
        particle.setRotation(rotation);
    }
    if (windValue.active) {
        particle.wind = windValue.newLowValue();
        particle.windDiff = windValue.newHighValue();
        if (!windValue.isRelative())
            particle.windDiff -= particle.wind;
    }
    if (gravityValue.active) {
        particle.gravity = gravityValue.newLowValue();
        particle.gravityDiff = gravityValue.newHighValue();
        if (!gravityValue.isRelative())
            particle.gravityDiff -= particle.gravity;
    }
    float[] color = particle.tint;
    if (color == null)
        particle.tint = color = new float[3];
    float[] temp = tintValue.getColor(0);
    color[0] = temp[0];
    color[1] = temp[1];
    color[2] = temp[2];
    particle.transparency = transparencyValue.newLowValue();
    particle.transparencyDiff = transparencyValue.newHighValue() - particle.transparency;
    // Spawn.
    float x = this.x;
    if (xOffsetValue.active)
        x += xOffsetValue.newLowValue();
    float y = this.y;
    if (yOffsetValue.active)
        y += yOffsetValue.newLowValue();
    switch(spawnShapeValue.shape) {
        case square:
            {
                float width = spawnWidth + (spawnWidthDiff * spawnWidthValue.getScale(percent));
                float height = spawnHeight + (spawnHeightDiff * spawnHeightValue.getScale(percent));
                x += MathUtils.random(width) - width / 2;
                y += MathUtils.random(height) - height / 2;
                break;
            }
        case ellipse:
            {
                float width = spawnWidth + (spawnWidthDiff * spawnWidthValue.getScale(percent));
                float height = spawnHeight + (spawnHeightDiff * spawnHeightValue.getScale(percent));
                float radiusX = width / 2;
                float radiusY = height / 2;
                if (radiusX == 0 || radiusY == 0)
                    break;
                float scaleY = radiusX / (float) radiusY;
                if (spawnShapeValue.edges) {
                    float spawnAngle;
                    switch(spawnShapeValue.side) {
                        case top:
                            spawnAngle = -MathUtils.random(179f);
                            break;
                        case bottom:
                            spawnAngle = MathUtils.random(179f);
                            break;
                        default:
                            spawnAngle = MathUtils.random(360f);
                            break;
                    }
                    float cosDeg = MathUtils.cosDeg(spawnAngle);
                    float sinDeg = MathUtils.sinDeg(spawnAngle);
                    x += cosDeg * radiusX;
                    y += sinDeg * radiusX / scaleY;
                    if ((updateFlags & UPDATE_ANGLE) == 0) {
                        particle.angle = spawnAngle;
                        particle.angleCos = cosDeg;
                        particle.angleSin = sinDeg;
                    }
                } else {
                    float radius2 = radiusX * radiusX;
                    while (true) {
                        float px = MathUtils.random(width) - radiusX;
                        float py = MathUtils.random(height) - radiusY;
                        if (px * px + py * py <= radius2) {
                            x += px;
                            y += py / scaleY;
                            break;
                        }
                    }
                }
                break;
            }
        case line:
            {
                float width = spawnWidth + (spawnWidthDiff * spawnWidthValue.getScale(percent));
                float height = spawnHeight + (spawnHeightDiff * spawnHeightValue.getScale(percent));
                if (width != 0) {
                    float lineX = width * MathUtils.random();
                    x += lineX;
                    y += lineX * (height / (float) width);
                } else
                    y += height * MathUtils.random();
                break;
            }
    }
    float spriteHeight = sprite.getHeight();
    particle.setBounds(x - spriteWidth / 2, y - spriteHeight / 2, spriteWidth, spriteHeight);
    int offsetTime = (int) (lifeOffset + lifeOffsetDiff * lifeOffsetValue.getScale(percent));
    if (offsetTime > 0) {
        if (offsetTime >= particle.currentLife)
            offsetTime = particle.currentLife - 1;
        updateParticle(particle, offsetTime / 1000f, offsetTime);
    }
}
