public boolean Code(java.io.InputStream inStream, java.io.OutputStream outStream, long outSize) throws IOException {
    m_RangeDecoder.SetStream(inStream);
    m_OutWindow.SetStream(outStream);
    Init();
    int state = Base.StateInit();
    int rep0 = 0, rep1 = 0, rep2 = 0, rep3 = 0;
    long nowPos64 = 0;
    byte prevByte = 0;
    while (outSize < 0 || nowPos64 < outSize) {
        int posState = (int) nowPos64 & m_PosStateMask;
        if (m_RangeDecoder.DecodeBit(m_IsMatchDecoders, (state << Base.kNumPosStatesBitsMax) + posState) == 0) {
            LiteralDecoder.Decoder2 decoder2 = m_LiteralDecoder.GetDecoder((int) nowPos64, prevByte);
            if (!Base.StateIsCharState(state))
                prevByte = decoder2.DecodeWithMatchByte(m_RangeDecoder, m_OutWindow.GetByte(rep0));
            else
                prevByte = decoder2.DecodeNormal(m_RangeDecoder);
            m_OutWindow.PutByte(prevByte);
            state = Base.StateUpdateChar(state);
            nowPos64++;
        } else {
            int len;
            if (m_RangeDecoder.DecodeBit(m_IsRepDecoders, state) == 1) {
                len = 0;
                if (m_RangeDecoder.DecodeBit(m_IsRepG0Decoders, state) == 0) {
                    if (m_RangeDecoder.DecodeBit(m_IsRep0LongDecoders, (state << Base.kNumPosStatesBitsMax) + posState) == 0) {
                        state = Base.StateUpdateShortRep(state);
                        len = 1;
                    }
                } else {
                    int distance;
                    if (m_RangeDecoder.DecodeBit(m_IsRepG1Decoders, state) == 0)
                        distance = rep1;
                    else {
                        if (m_RangeDecoder.DecodeBit(m_IsRepG2Decoders, state) == 0)
                            distance = rep2;
                        else {
                            distance = rep3;
                            rep3 = rep2;
                        }
                        rep2 = rep1;
                    }
                    rep1 = rep0;
                    rep0 = distance;
                }
                if (len == 0) {
                    len = m_RepLenDecoder.Decode(m_RangeDecoder, posState) + Base.kMatchMinLen;
                    state = Base.StateUpdateRep(state);
                }
            } else {
                rep3 = rep2;
                rep2 = rep1;
                rep1 = rep0;
                len = Base.kMatchMinLen + m_LenDecoder.Decode(m_RangeDecoder, posState);
                state = Base.StateUpdateMatch(state);
                int posSlot = m_PosSlotDecoder[Base.GetLenToPosState(len)].Decode(m_RangeDecoder);
                if (posSlot >= Base.kStartPosModelIndex) {
                    int numDirectBits = (posSlot >> 1) - 1;
                    rep0 = ((2 | (posSlot & 1)) << numDirectBits);
                    if (posSlot < Base.kEndPosModelIndex)
                        rep0 += BitTreeDecoder.ReverseDecode(m_PosDecoders, rep0 - posSlot - 1, m_RangeDecoder, numDirectBits);
                    else {
                        rep0 += (m_RangeDecoder.DecodeDirectBits(numDirectBits - Base.kNumAlignBits) << Base.kNumAlignBits);
                        rep0 += m_PosAlignDecoder.ReverseDecode(m_RangeDecoder);
                        if (rep0 < 0) {
                            if (rep0 == -1)
                                break;
                            return false;
                        }
                    }
                } else
                    rep0 = posSlot;
            }
            if (rep0 >= nowPos64 || rep0 >= m_DictionarySizeCheck) {
                // m_OutWindow.Flush();
                return false;
            }
            m_OutWindow.CopyBlock(rep0, len);
            nowPos64 += len;
            prevByte = m_OutWindow.GetByte(0);
        }
    }
    m_OutWindow.Flush();
    m_OutWindow.ReleaseStream();
    m_RangeDecoder.ReleaseStream();
    return true;
}
