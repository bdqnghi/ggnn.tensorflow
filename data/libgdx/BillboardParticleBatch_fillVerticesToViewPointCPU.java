/*
	private void fillVerticesToParticleDirectionGPU (int[] particlesOffset) {
		int tp=0;
		for(BillboardControllerRenderData data : renderData){
			FloatChannel scaleChannel = data.scaleChannel;
			FloatChannel regionChannel = data.regionChannel;
			FloatChannel positionChannel = data.positionChannel;
			FloatChannel colorChannel = data.colorChannel;
			FloatChannel rotationChannel = data.rotationChannel;

			for(int p=0, c = data.controller.particles.size; p < c; ++p, ++tp){
				int baseOffset = particlesOffset[tp]*currentVertexSize*4;
				float scale = scaleChannel.data[p* scaleChannel.strideSize];
				int regionOffset = p*regionChannel.strideSize;
				int positionOffset = p*positionChannel.strideSize;
				int colorOffset = p*colorChannel.strideSize;
				int rotationOffset = p*rotationChannel.strideSize;
				int velocityOffset = p* velocityChannel.strideSize;
				float 	px = positionChannel.data[positionOffset + ParticleChannels.XOffset],
					py = positionChannel.data[positionOffset + ParticleChannels.YOffset],
					pz = positionChannel.data[positionOffset + ParticleChannels.ZOffset];
				float u = regionChannel.data[regionOffset +ParticleChannels.UOffset];
				float v = regionChannel.data[regionOffset +ParticleChannels.VOffset];
				float u2 = regionChannel.data[regionOffset +ParticleChannels.U2Offset];
				float v2 = regionChannel.data[regionOffset +ParticleChannels.V2Offset];
				float 	sx = regionChannel.data[regionOffset +ParticleChannels.HalfWidthOffset] * scale,
							sy = regionChannel.data[regionOffset+ParticleChannels.HalfHeightOffset]  * scale;
				float r = colorChannel.data[colorOffset +ParticleChannels.RedOffset];
				float g = colorChannel.data[colorOffset +ParticleChannels.GreenOffset];
				float b = colorChannel.data[colorOffset +ParticleChannels.BlueOffset];
				float a = colorChannel.data[colorOffset +ParticleChannels.AlphaOffset];
				float cosRotation = rotationChannel.data[rotationOffset +ParticleChannels.CosineOffset];
				float sinRotation = rotationChannel.data[rotationOffset +ParticleChannels.SineOffset];
				float 	vx = velocityChannel.data[velocityOffset + ParticleChannels.XOffset],
							vy = velocityChannel.data[velocityOffset + ParticleChannels.YOffset],
							vz = velocityChannel.data[velocityOffset + ParticleChannels.ZOffset];

				//bottom left, bottom right, top right, top left
				TMP_V1.set(vx, vy, vz).nor();
				putVertex(vertices, baseOffset, px, py, pz, u, v2, -sx, -sy, cosRotation, sinRotation, r, g, b, a, TMP_V1);
				baseOffset += currentVertexSize;
				putVertex(vertices, baseOffset, px, py, pz, u2, v2, sx, -sy, cosRotation, sinRotation, r, g, b, a, TMP_V1);
				baseOffset += currentVertexSize;
				putVertex(vertices, baseOffset, px, py, pz, u2, v, sx, sy, cosRotation, sinRotation, r, g, b, a, TMP_V1);
				baseOffset += currentVertexSize;
				putVertex(vertices, baseOffset, px, py, pz, u, v, -sx, sy, cosRotation, sinRotation, r, g, b, a, TMP_V1);
			}
		}
	}

	private void fillVerticesToParticleDirectionCPU (int[] particlesOffset) {
		int tp=0;
		for(ParticleController controller : renderData){
			FloatChannel scaleChannel = controller.particles.getChannel(ParticleChannels.Scale);
			FloatChannel regionChannel = controller.particles.getChannel(ParticleChannels.TextureRegion);
			FloatChannel positionChannel = controller.particles.getChannel(ParticleChannels.Position);
			FloatChannel colorChannel = controller.particles.getChannel(ParticleChannels.Color);
			FloatChannel rotationChannel = controller.particles.getChannel(ParticleChannels.Rotation2D);
			FloatChannel velocityChannel = controller.particles.getChannel(ParticleChannels.Accelleration);

			for(int p=0, c = controller.particles.size; p < c; ++p, ++tp){
				int baseOffset = particlesOffset[tp]*currentVertexSize*4;
				float scale = scaleChannel.data[p* scaleChannel.strideSize];
				int regionOffset = p*regionChannel.strideSize;
				int positionOffset = p*positionChannel.strideSize;
				int colorOffset = p*colorChannel.strideSize;
				int rotationOffset = p*rotationChannel.strideSize;
				int velocityOffset = p* velocityChannel.strideSize;
				float 	px = positionChannel.data[positionOffset + ParticleChannels.XOffset],
					py = positionChannel.data[positionOffset + ParticleChannels.YOffset],
					pz = positionChannel.data[positionOffset + ParticleChannels.ZOffset];
				float u = regionChannel.data[regionOffset +ParticleChannels.UOffset];
				float v = regionChannel.data[regionOffset +ParticleChannels.VOffset];
				float u2 = regionChannel.data[regionOffset +ParticleChannels.U2Offset];
				float v2 = regionChannel.data[regionOffset +ParticleChannels.V2Offset];
				float 	sx = regionChannel.data[regionOffset +ParticleChannels.HalfWidthOffset] * scale,
							sy = regionChannel.data[regionOffset+ParticleChannels.HalfHeightOffset]  * scale;
				float r = colorChannel.data[colorOffset +ParticleChannels.RedOffset];
				float g = colorChannel.data[colorOffset +ParticleChannels.GreenOffset];
				float b = colorChannel.data[colorOffset +ParticleChannels.BlueOffset];
				float a = colorChannel.data[colorOffset +ParticleChannels.AlphaOffset];
				float cosRotation = rotationChannel.data[rotationOffset +ParticleChannels.CosineOffset];
				float sinRotation = rotationChannel.data[rotationOffset +ParticleChannels.SineOffset];
				float 	vx = velocityChannel.data[velocityOffset + ParticleChannels.XOffset],
							vy = velocityChannel.data[velocityOffset + ParticleChannels.YOffset],
							vz = velocityChannel.data[velocityOffset + ParticleChannels.ZOffset];
				Vector3 up = TMP_V1.set(vx,vy,vz).nor(),
								look = TMP_V3.set(camera.position).sub(px,py,pz).nor(), //normal
								right = TMP_V2.set(up).crs(look).nor(); //tangent
				look.set(right).crs(up).nor();
				right.scl(sx);
				up.scl(sy);

				if(cosRotation != 1){
					TMP_M3.setToRotation(look, cosRotation, sinRotation);
					putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x-TMP_V2.x, -TMP_V1.y-TMP_V2.y, -TMP_V1.z-TMP_V2.z).mul(TMP_M3).add(px, py, pz), u, v2, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset,TMP_V6.set(TMP_V1.x-TMP_V2.x, TMP_V1.y-TMP_V2.y, TMP_V1.z-TMP_V2.z).mul(TMP_M3).add(px, py, pz), u2, v2, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset,TMP_V6.set(TMP_V1.x+TMP_V2.x, TMP_V1.y+TMP_V2.y, TMP_V1.z+TMP_V2.z).mul(TMP_M3).add(px, py, pz), u2, v, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x+TMP_V2.x, -TMP_V1.y+TMP_V2.y, -TMP_V1.z+TMP_V2.z).mul(TMP_M3).add(px, py, pz), u, v, r, g, b, a);
				}
				else {
					putVertex(vertices, baseOffset,TMP_V6.set(-TMP_V1.x-TMP_V2.x+px, -TMP_V1.y-TMP_V2.y+py, -TMP_V1.z-TMP_V2.z+pz), u, v2, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset,TMP_V6.set(TMP_V1.x-TMP_V2.x+px, TMP_V1.y-TMP_V2.y+py, TMP_V1.z-TMP_V2.z+pz), u2, v2, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset,TMP_V6.set(TMP_V1.x+TMP_V2.x+px, TMP_V1.y+TMP_V2.y+py, TMP_V1.z+TMP_V2.z+pz), u2, v, r, g, b, a);
					baseOffset += currentVertexSize;
					putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x+TMP_V2.x+px, -TMP_V1.y+TMP_V2.y+py, -TMP_V1.z+TMP_V2.z+pz), u, v, r, g, b, a);
				}
			}
		}
	}
	 */
private void fillVerticesToViewPointCPU(int[] particlesOffset) {
    int tp = 0;
    for (BillboardControllerRenderData data : renderData) {
        FloatChannel scaleChannel = data.scaleChannel;
        FloatChannel regionChannel = data.regionChannel;
        FloatChannel positionChannel = data.positionChannel;
        FloatChannel colorChannel = data.colorChannel;
        FloatChannel rotationChannel = data.rotationChannel;
        for (int p = 0, c = data.controller.particles.size; p < c; ++p, ++tp) {
            int baseOffset = particlesOffset[tp] * currentVertexSize * 4;
            float scale = scaleChannel.data[p * scaleChannel.strideSize];
            int regionOffset = p * regionChannel.strideSize;
            int positionOffset = p * positionChannel.strideSize;
            int colorOffset = p * colorChannel.strideSize;
            int rotationOffset = p * rotationChannel.strideSize;
            float px = positionChannel.data[positionOffset + ParticleChannels.XOffset], py = positionChannel.data[positionOffset + ParticleChannels.YOffset], pz = positionChannel.data[positionOffset + ParticleChannels.ZOffset];
            float u = regionChannel.data[regionOffset + ParticleChannels.UOffset];
            float v = regionChannel.data[regionOffset + ParticleChannels.VOffset];
            float u2 = regionChannel.data[regionOffset + ParticleChannels.U2Offset];
            float v2 = regionChannel.data[regionOffset + ParticleChannels.V2Offset];
            float sx = regionChannel.data[regionOffset + ParticleChannels.HalfWidthOffset] * scale, sy = regionChannel.data[regionOffset + ParticleChannels.HalfHeightOffset] * scale;
            float r = colorChannel.data[colorOffset + ParticleChannels.RedOffset];
            float g = colorChannel.data[colorOffset + ParticleChannels.GreenOffset];
            float b = colorChannel.data[colorOffset + ParticleChannels.BlueOffset];
            float a = colorChannel.data[colorOffset + ParticleChannels.AlphaOffset];
            float cosRotation = rotationChannel.data[rotationOffset + ParticleChannels.CosineOffset];
            float sinRotation = rotationChannel.data[rotationOffset + ParticleChannels.SineOffset];
            Vector3 // normal
            look = TMP_V3.set(camera.position).sub(px, py, pz).nor(), // tangent
            right = TMP_V1.set(camera.up).crs(look).nor(), up = TMP_V2.set(look).crs(right);
            right.scl(sx);
            up.scl(sy);
            if (cosRotation != 1) {
                TMP_M3.setToRotation(look, cosRotation, sinRotation);
                putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x - TMP_V2.x, -TMP_V1.y - TMP_V2.y, -TMP_V1.z - TMP_V2.z).mul(TMP_M3).add(px, py, pz), u, v2, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(TMP_V1.x - TMP_V2.x, TMP_V1.y - TMP_V2.y, TMP_V1.z - TMP_V2.z).mul(TMP_M3).add(px, py, pz), u2, v2, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(TMP_V1.x + TMP_V2.x, TMP_V1.y + TMP_V2.y, TMP_V1.z + TMP_V2.z).mul(TMP_M3).add(px, py, pz), u2, v, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x + TMP_V2.x, -TMP_V1.y + TMP_V2.y, -TMP_V1.z + TMP_V2.z).mul(TMP_M3).add(px, py, pz), u, v, r, g, b, a);
            } else {
                putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x - TMP_V2.x + px, -TMP_V1.y - TMP_V2.y + py, -TMP_V1.z - TMP_V2.z + pz), u, v2, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(TMP_V1.x - TMP_V2.x + px, TMP_V1.y - TMP_V2.y + py, TMP_V1.z - TMP_V2.z + pz), u2, v2, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(TMP_V1.x + TMP_V2.x + px, TMP_V1.y + TMP_V2.y + py, TMP_V1.z + TMP_V2.z + pz), u2, v, r, g, b, a);
                baseOffset += currentVertexSize;
                putVertex(vertices, baseOffset, TMP_V6.set(-TMP_V1.x + TMP_V2.x + px, -TMP_V1.y + TMP_V2.y + py, -TMP_V1.z + TMP_V2.z + pz), u, v, r, g, b, a);
            }
        }
    }
}
